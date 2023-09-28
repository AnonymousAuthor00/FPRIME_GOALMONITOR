import os
import shutil
import sys
import pandas as pd
from distutils.dir_util import copy_tree


def write_directory(path, old_str, new_str):
    for root, dirs, files in os.walk(path, topdown=False):
        for file in files:
            write_file(os.path.join(root, file), old_str, new_str)


def write_file(filename, old_str, new_str):
    with open(filename, "r") as file:
        filedata = file.read()
    filedata = filedata.replace(old_str, new_str)
    with open(filename, "w") as file:
        file.write(filedata)


def copy_directory(template_dir, target_dir):
    if os.path.exists(target_dir):
        shutil.rmtree(target_dir)
    copy_tree(template_dir, target_dir)


def copy_file(template_file, target_file):
    if os.path.exists(target_file):
        os.remove(target_file)
    shutil.copyfile(template_file, target_file)


def create_directory(component):
    copy_directory("Template/NewComponent", f"../{component}")
    os.chdir(f"../{component}")
    os.rename("NewComponent.cpp", f"{component}.cpp")
    os.rename("NewComponent.fpp", f"{component}.fpp")
    write_file(f"{component}.fpp", "NewComponent", component)
    write_file(f"{component}.fpp", "example", project_name)
    write_file("CMakeLists.txt", "NewComponent", component)
    os.chdir("../Gm")


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    project_name = sys.argv[1]

    # Create GoalMonitorPort directory
    copy_directory("Template/GoalMonitorPort", "../GoalMonitorPort")
    write_directory("../GoalMonitorPort", "example", project_name)

    # Create Top directory
    copy_directory("Template/Top", "../Top")
    write_directory("../Top", "example", project_name)
    os.rename("../Top/TopologyDefs.cpp", f"../Top/{project_name}TopologyDefs.cpp")
    os.rename("../Top/TopologyDefs.hpp", f"../Top/{project_name}TopologyDefs.hpp")

    # Create component directories
    components = []
    df = pd.read_csv('model.csv')
    for number in df[df['Component'] != "Null"]['GoalNumber']:
        component_names = [str(x) for x in df[df['GoalNumber'] == number]['Component']]
        for component_name in component_names:
                component = capitalize(component_name)
                if component not in components:
                    create_directory(component)
                    components.append(component)

    # Create GoalMonitor directory
    copy_directory("Template/GoalMonitor", "../GoalMonitor")
    write_file("../GoalMonitor/GoalMonitor.fpp", "example", project_name)

    # Create CMake file
    copy_file("Template/CMakeLists.txt", "../CMakeLists.txt")
    write_file("../CMakeLists.txt", "example", project_name)

    # Build the model
    os.chdir("../GoalMonitorPort")
    os.system("fprime-util generate")
    os.system("fprime-util build")
    os.chdir("../Gm")