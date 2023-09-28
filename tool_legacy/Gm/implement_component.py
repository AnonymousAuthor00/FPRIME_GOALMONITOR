import os
import re
import pandas as pd


def find_file(path, str):
    for file_name in os.listdir(path):
        if file_name.endswith(str):
            return os.path.join(path, file_name)


def find_class(path, str):
    for file_name in os.listdir(path):
        if file_name.endswith(str):
            return file_name


def find_string(path, str):
    with open(path, 'r') as file:
        for line_number, line in enumerate(file, 1):
            if str in line:
                return line_number
    return None


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


def add_variable(component, logic, varB, varF, varU, str1, number):
    cpp_path = find_file(f"../{component}", "Impl.cpp")
    if cpp_path is None:
        cpp_path = find_file(f"../{component}", ".cpp")
    hpp_path = find_file(f"../{component}", "Impl.hpp")
    if hpp_path is None:
        hpp_path = find_file(f"../{component}", ".hpp")
    class_name = find_class(f"../{component}", "Impl.cpp")
    if class_name is None:
        class_name = find_class(f"../{component}", ".cpp")
    class_name = class_name.split(".")[0]
    str1 = str1.replace("NewComponent", class_name)
    str1 = str1.replace("Number", str(number))
    elements, types = extract_elements(logic)
    for i in range(len(elements)):
        if types[i] == "B":
            if elements[i] not in varB:
                varB.append(elements[i])
            line = find_string(cpp_path, "}")
            append_file(cpp_path, f"    mapB[{varB.index(elements[i])}] = &{elements[i]};\n", line)
            append_file(cpp_path, f"    this->{elements[i]} = false;\n", line)
            line = find_string(hpp_path, "PRIVATE:")
            append_file(hpp_path, f"      bool {elements[i]};\n", line + 1)
            if f"// TODO\n    BOut_out(0, *(mapB[{varB.index(elements[i])}]), {varB.index(elements[i])});" not in str1:
                str1 = str1.replace("// TODO", f"// TODO\n    BOut_out(0, *(mapB[{varB.index(elements[i])}]), {varB.index(elements[i])});")
        elif types[i] == "F":
            if f"U32 {elements[i]}" in open(hpp_path).read():
                if elements[i] not in varU:
                    varU.append(elements[i])
                line = find_string(cpp_path, "}")
                append_file(cpp_path, f"    mapU[{varU.index(elements[i])}] = &{elements[i]};\n", line)
                append_file(cpp_path, f"    this->{elements[i]} = 0;\n", line)
                line = find_string(hpp_path, "PRIVATE:")
                append_file(hpp_path, f"      U32 {elements[i]};\n", line + 1)
                if f"// TODO\n    UOut_out(0, *(mapU[{varU.index(elements[i])}]), {varU.index(elements[i])});" not in str1:
                    str1 = str1.replace("// TODO", f"// TODO\n    UOut_out(0, *(mapU[{varU.index(elements[i])}]), {varU.index(elements[i])});")
            else:
                if elements[i] not in varF:
                    varF.append(elements[i])
                line = find_string(cpp_path, "}")
                append_file(cpp_path, f"    mapF[{varF.index(elements[i])}] = &{elements[i]};\n", line)
                append_file(cpp_path, f"    this->{elements[i]} = 0.0;\n", line)
                line = find_string(hpp_path, "PRIVATE:")
                append_file(hpp_path, f"      F32 {elements[i]};\n", line + 1)
                if f"// TODO\n    FOut_out(0, *(mapF[{varF.index(elements[i])}]), {varF.index(elements[i])});" not in str1:
                    str1 = str1.replace("// TODO", f"// TODO\n    FOut_out(0, *(mapF[{varF.index(elements[i])}]), {varF.index(elements[i])});")
    str1 += "\n"
    line = find_string(cpp_path, "end namespace")
    append_file(cpp_path, str1, line)
    line = find_string(hpp_path, "PRIVATE:")
    append_file(hpp_path, f"      void varReq{str(number)}In_handler(\n          const NATIVE_INT_TYPE portNum\n      );\n", line + 1)

    return varB, varF, varU


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    varB = []
    varF = []
    varU = []
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
            varB, varF, varU = add_variable(component, logic, varB, varF, varU, str1, number)
            if component not in components:
                components.append(component)

    # import map
    for component in components:
        cpp_path = find_file(f"../{component}", "Impl.cpp")
        if cpp_path is None:
            cpp_path = find_file(f"../{component}", ".cpp")
        hpp_path = find_file(f"../{component}", "Impl.hpp")
        if hpp_path is None:
            hpp_path = find_file(f"../{component}", ".hpp")
        line = find_string(hpp_path, "PRIVATE:")
        append_file(hpp_path, f"      std::map<int, int*> mapU;\n", line + 1)
        append_file(hpp_path, f"      std::map<int, float*> mapF;\n", line + 1)
        append_file(hpp_path, f"      std::map<int, bool*> mapB;\n", line + 1)
        line = find_string(cpp_path, "namespace")
        append_file(cpp_path, f"#include <map>\n", line)
        line = find_string(hpp_path, "namespace")
        append_file(hpp_path, f"#include <map>\n", line)
