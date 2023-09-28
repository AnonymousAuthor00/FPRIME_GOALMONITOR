import os
import shutil
import sys
from distutils.dir_util import copy_tree


def write_directory(path, str1, str2):
    for root, dirs, files in os.walk(path, topdown=False):
        for file in files:
            write_file(os.path.join(root, file), str1, str2)


def write_file(filename, str1, str2):
    with open(filename, "r") as file:
        filedata = file.read()
    filedata = filedata.replace(str1, str2)
    with open(filename, "w") as file:
        file.write(filedata)


def copy_directory(template, path):
    if os.path.exists(path):
        shutil.rmtree(path)
    copy_tree(template, path)


if __name__ == "__main__":
    project_name = sys.argv[1]

    # Create port directory
    copy_directory("Template/GoalMonitorPort", "../GoalMonitorPort")
    write_directory("../Ports", "example", project_name)

    # Create GoalMonitor directory
    copy_directory("Template/GoalMonitor", "../GoalMonitor")
    write_directory("../GoalMonitor", "example", project_name)