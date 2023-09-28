import os
import pandas as pd


def append_file(filename, line, line_number):
    with open(filename) as file:
        if line not in file.read():
            with open(filename, "r+") as file:
                lines = file.readlines()
                lines.insert(line_number - 1, line)
                file.seek(0)
                file.writelines(lines)


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    df = pd.read_csv('model.csv')
    components = []

    # Add varReq ports to component fpp files and GoalMonitor fpp file
    for number in df['GoalNumber']:
        component_names = [str(x) for x in df[df['GoalNumber'] == number]['Component']]
        for component_name in component_names:
            if component_name != 'Null':
                component = capitalize(component_name)
                append_file(f"../{component}/{component}.fpp", f'        sync input port varReq{number}In: VarReq\n', 3)
                append_file("../GoalMonitor/GoalMonitor.fpp", f'        output port varReq{number}Out: VarReq\n', 9)
                if component not in components:
                    components.append(component)

    # Add each component to the project in the CMakeLists.txt file
    components.append("GoalMonitor")
    for component in components:
        append_file("../CMakeLists.txt", f'add_fprime_subdirectory("${{CMAKE_CURRENT_LIST_DIR}}/{component}/")\n', 43)

        # Build the stub implementation
        os.chdir(f"../{component}")
        os.system("fprime-util impl")
        os.system(f"mv {component}.cpp-template {component}.cpp")
        os.system(f"mv {component}.hpp-template {component}.hpp")
        os.chdir("../Gm")