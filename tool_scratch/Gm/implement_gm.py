import os
import re
import pandas as pd
import sys


def write_file(filename, str1, str2):
    with open(filename, "r") as file:
        filedata = file.read()
    filedata = filedata.replace(str1, str2)
    with open(filename, "w") as file:
        file.write(filedata)


def append_file(filename, str, number):
    with open(filename) as file:
        tem = str not in file.read()
    if tem:
        with open(filename, "r+") as file:
            lines = file.readlines()
            lines.insert(number - 1, str)
        with open(filename, "w") as file:
            file.writelines(lines)


def extract_elements(logic):
    pattern = r'([a-zA-Z_][a-zA-Z0-9_]*|\d+\.\d+)'
    matches = re.finditer(pattern, logic)
    elements = []
    prev_chars = []
    next_chars = []
    types =[]
    for match in matches:
        start, end = match.span()
        elements.append(match.group())
        if start > 0:
            prev_chars.append(logic[start - 1])
        else:
            prev_chars.append(None)
        if end < len(logic):
            next_chars.append(logic[end])
        else:
            next_chars.append(None)
    for i in range(len(elements)):
        if elements[i].replace(".", "", 1).isdigit():
            types.append("V")
        elif prev_chars[i] in {"<", ">", "=", "+", "-", "*", "/", "%"} or next_chars[i] in {"<", ">", "=", "+", "-", "*", "/", "%"}:
            types.append("F")
        else:
            types.append("B")
    return elements, types


def add_variable(component, logic, varB, varF):
    logic_ = logic
    elements, types = extract_elements(logic)
    if "<->" in logic_:
        logic_ = logic_.replace("<->", "==")
    if "->" in logic_:
        parts = logic_.split("->")
        logic_ = "!" + parts[0] + "||(" + parts[0] + "&&(" + parts[1] + "))"
    for i in range(len(elements)):
        if types[i] == "B":
            if elements[i] not in varB:
                varB.append(elements[i])
                logic_ = logic_.replace(elements[i], "this->" + elements[i])
            append_file("../GoalMonitor/GoalMonitor.cpp", f"    mapB[{varB.index(elements[i])}] = &{elements[i]};\n", 22)
            append_file("../GoalMonitor/GoalMonitor.cpp", f"    this->{elements[i]} = false;\n", 22)
            append_file("../GoalMonitor/GoalMonitor.hpp", f"      bool {elements[i]};\n", 40)
        elif types[i] == "F":
            if elements[i] not in varF:
                varF.append(elements[i])
                logic_ = logic_.replace(elements[i], "this->" + elements[i])
            append_file("../GoalMonitor/GoalMonitor.cpp", f"    mapF[{varF.index(elements[i])}] = &{elements[i]};\n", 22)
            append_file("../GoalMonitor/GoalMonitor.cpp", f"    this->{elements[i]} = 0.0;\n", 22)
            append_file("../GoalMonitor/GoalMonitor.hpp", f"      F32 {elements[i]};\n", 40)
    return logic_, varB, varF


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    project_name = sys.argv[1]
    varB = []
    varF = []

    # complete cpp hpp file implementation
    df = pd.read_csv('model.csv')
    with open("Template/goalChecker.txt", "r") as file:
        str1 = (file.read()).replace("example", project_name)
    with open("Template/eventLog.txt", "r") as file:
        str2_ = file.read()

    # complete varIn handler
    append_file("../GoalMonitor/GoalMonitor.cpp", f"    *(mapF[number]) = data;\n", 52)
    append_file("../GoalMonitor/GoalMonitor.cpp", f"    this->log_ACTIVITY_HI_RECVF(number, data);\n", 52)
    append_file("../GoalMonitor/GoalMonitor.cpp", f"    *(mapB[number]) = data;\n", 42)
    append_file("../GoalMonitor/GoalMonitor.cpp", f"    this->log_ACTIVITY_HI_RECVB(number, data);\n", 42)

    # add map
    append_file("../GoalMonitor/GoalMonitor.hpp", f"      std::map<int, float*> mapF;\n", 39)
    append_file("../GoalMonitor/GoalMonitor.hpp", f"      std::map<int, bool*> mapB;\n", 39)

    # add goal variable
    for number in df['GoalNumber']:
        append_file("../GoalMonitor/GoalMonitor.cpp", f"    this->goal{str(number)} = false;\n", 22)
        append_file("../GoalMonitor/GoalMonitor.hpp", f"      bool goal{str(number)};\n", 39)
    for number in df['GoalNumber']:
        component_ = df[df['GoalNumber'] == number]['Component']
        component = capitalize([str(x) for x in component_][0])
        if component != 'Null':

            # add variables and determine goal satisfaction logic of leaf goals
            logic_expression = df[df['GoalNumber'] == number]['LogicExpression']
            logic = [str(x) for x in logic_expression][0]
            str3, varB, varF = add_variable(component, logic, varB, varF)
            write_file("../GoalMonitor/GoalMonitor.cpp", "    this->cmdResponse_out", f"    varReq{str(number)}Out_out(0);\n    this->cmdResponse_out")
        else:

            # determine goal satisfaction logic of non-leaf goals
            refinement_ = df[df['GoalNumber'] == number]['Refinement']
            refinement = [str(x) for x in refinement_][0]
            numbers = []
            for number_ in df['GoalNumber']:
                if int(df[df['GoalNumber'] == number_]['ParentGoal']) == number:
                    numbers.append(number_)
            str3 = "this->goal" + str(numbers[0])
            for i in range(len(numbers) - 1):
                if refinement == "AND":
                    str3 += " && this->goal" + str(numbers[i + 1])
                elif refinement == "OR":
                    str3 += " || this->goal" + str(numbers[i + 1])

        # add event log
        str2 = str2_.replace("Number", str(number))
        str1 = str1.replace("// goal check function", f"// goal check function\n{str2}")
        str1 = str1.replace("// goal check function", f"// goal check function\n        this->goal{str(number)} = {str3};")

    # import map
    append_file("../GoalMonitor/GoalMonitor.cpp", f"#include <map>\n", 10)
    append_file("../GoalMonitor/GoalMonitor.hpp", f"#include <map>\n", 9)

    # add goal check function
    write_file("../GoalMonitor/GoalMonitor.hpp", "      //! Handler implementation for BIn", "      void goalSatisfactionCheck();\n      //! Handler implementation for BIn")
    write_file("../GoalMonitor/GoalMonitor.cpp", "} // end namespace " + project_name, str1)
    write_file("../GoalMonitor/GoalMonitor.cpp", "    this->cmdResponse_out", "    goalSatisfactionCheck();\n    this->cmdResponse_out")

    # check the build
    os.chdir("../GoalMonitor")
    os.system("fprime-util build")
    os.chdir("../Gm")