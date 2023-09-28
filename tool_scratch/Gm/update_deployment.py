import pandas as pd
import re
from distutils.dir_util import copy_tree
import shutil
import os
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


def copy_directory(template, path):
    if os.path.exists(path):
        shutil.rmtree(path)
    copy_tree(template, path)


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


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    project_name = sys.argv[1]

    id = 51
    df = pd.read_csv('model.csv')
    components = []
    for number in df['GoalNumber']:
        component_ = df[df['GoalNumber'] == number]['Component']
        component = [str(x) for x in component_][0]
        if component != 'Null':
            if component not in components:
                # Add instances
                str0 = f"\n  instance {component}: {project_name}.{capitalize(component)} base id 0x{str(id)}00\n"
                append_file("../Top/instances.fpp", str0, 167)
                append_file("../Top/topology.fpp", f"    instance {component}\n", 48)
                # Add connection
                str2 = f"      {component}.BOut -> goalMonitor.BIn"
                write_file("../Top/topology.fpp", "connections Gm {", "connections Gm {\n" + str2)
                str3 = f"      {component}.FOut -> goalMonitor.FIn"
                write_file("../Top/topology.fpp", "connections Gm {", "connections Gm {\n" + str3)
                components.append(component)
                id += 1
            # Update goal monitor connection
            str1 = f"      goalMonitor.varReq{str(number)}Out -> {component}.varReq{str(number)}In"
            write_file("../Top/topology.fpp", "connections Gm {", "connections Gm {\n" + str1)