import os
import re
import pandas as pd


def write_file(filename, old_str, new_str):
    with open(filename, "r") as file:
        filedata = file.read()
    filedata = filedata.replace(old_str, new_str)
    with open(filename, "w") as file:
        file.write(filedata)


def append_file(filename, str, number):
    if str not in open(filename).read():
        with open(filename, "r+") as file:
            lines = file.readlines()
            lines.insert(number - 1, str)
            file.seek(0)
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


def add_variable(component, logic, varB, varF, str1, number):
    str1 = str1.replace("NewComponent", component)
    str1 = str1.replace("Number", str(number))
    str2 = str1
    elements, types = extract_elements(logic)
    for i in range(len(elements)):
        if types[i] == "B":
            if elements[i] not in varB:
                varB.append(elements[i])
            append_file(f"../{component}/{component}.cpp", f"    mapB[{varB.index(elements[i])}] = &{elements[i]};\n", 22)
            append_file(f"../{component}/{component}.cpp", f"    this->{elements[i]} = false;\n", 22)
            append_file(f"../{component}/{component}.hpp", f"      bool {elements[i]};\n", 39)
            str2 = str2.replace("// TODO", f"// TODO\n    BOut_out(0, *(mapB[{varB.index(elements[i])}]), {varB.index(elements[i])});")
        elif types[i] == "F":
            if elements[i] not in varF:
                varF.append(elements[i])
            append_file(f"../{component}/{component}.cpp", f"    mapF[{varF.index(elements[i])}] = &{elements[i]};\n", 22)
            append_file(f"../{component}/{component}.cpp", f"    this->{elements[i]} = 0.0;\n", 22)
            append_file(f"../{component}/{component}.hpp", f"      F32 {elements[i]};\n", 39)
            str2 = str2.replace("// TODO", f"// TODO\n    FOut_out(0, *(mapF[{varF.index(elements[i])}]), {varF.index(elements[i])});")
    write_file(f"../{component}/{component}.cpp", str1, str2)
    return varB, varF


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    varB = []
    varF = []

    # complete cpp hpp file implementation
    df = pd.read_csv('model.csv')
    components = []
    with open("Template/goalIn.txt", "r") as file:
        str1 = file.read()
    for number in df['GoalNumber']:
        component_ = df[df['GoalNumber'] == number]['Component']
        component = capitalize([str(x) for x in component_][0])
        if component != 'Null':
            logic_ = df[df['GoalNumber'] == number]['LogicExpression']
            logic = [str(x) for x in logic_][0]
            varB, varF = add_variable(component, logic, varB, varF, str1, number)
            if component not in components:
                components.append(component)

    # check the build
    for component in components:
        os.chdir("../" + component)
        append_file(component + ".hpp", f"      std::map<int, float*> mapF;\n", 39)
        append_file(component + ".hpp", f"      std::map<int, bool*> mapB;\n", 39)
        append_file(component + ".cpp", f"#include <map>\n", 10)
        append_file(component + ".hpp", f"#include <map>\n", 9)
        os.system("fprime-util build")
        os.chdir("../Gm")