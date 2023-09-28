import os
import sys
import pandas as pd


def find_file(path, str):
    for file_name in os.listdir(path):
        if file_name.endswith(str):
            return os.path.join(path, file_name)


def find_string(path, str):
    with open(path, 'r') as file:
        for line_number, line in enumerate(file, 1):
            if str in line:
                return line_number
    return None


def append_file(filename, str, number):
    with open(filename) as file:
        tem = str not in file.read()
    if tem:
        with open(filename, "r+") as file:
            lines = file.readlines()
            lines.insert(number - 1, str)
        with open(filename, "w") as file:
            file.writelines(lines)


def replace_file(filename, str1, str2):
    with open(filename, "r") as file:
        filedata = file.read()
    filedata = filedata.replace(str1, str2)
    with open(filename, "w") as file:
        file.write(filedata)


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    project_name = sys.argv[1]
    # add ports to xml files
    df = pd.read_csv('model.csv')
    components = []
    for number in df['GoalNumber']:
        component_ = df[df['GoalNumber'] == number]['Component']
        component = capitalize([str(x) for x in component_][0])
        if component != 'Null':
            filename = find_file(f"../{component}/", "ComponentAi.xml")
            if component not in components:
                line = find_string(filename, "</ports>")
                append_file(filename, f'        <port name="UOut" data_type="{project_name}::PortU" kind="output" max_number="1"/>\n', line)
                append_file(filename, f'        <port name="FOut" data_type="{project_name}::PortF" kind="output" max_number="1"/>\n', line)
                append_file(filename, f'        <port name="BOut" data_type="{project_name}::PortB" kind="output" max_number="1"/>\n', line)
                line = find_string(filename, "<ports>")
                append_file(filename, f"    <import_port_type>{project_name}/GoalMonitorPort/VarReqPortAi.xml</import_port_type>\n", line)
                append_file(filename, f"    <import_port_type>{project_name}/GoalMonitorPort/PortUPortAi.xml</import_port_type>\n", line)
                append_file(filename, f"    <import_port_type>{project_name}/GoalMonitorPort/PortFPortAi.xml</import_port_type>\n", line)
                append_file(filename, f"    <import_port_type>{project_name}/GoalMonitorPort/PortBPortAi.xml</import_port_type>\n",line)
                components.append(component)
            line = find_string(filename, "</ports>")
            append_file(filename, f'        <port name="varReq{str(number)}In" data_type="{project_name}::VarReq" kind="sync_input" max_number="1"/>\n', line)
            append_file("../GoalMonitor/GoalMonitorComponentAi.xml", f'    <port name="varReq{str(number)}Out" data_type="{project_name}::VarReq" kind="output" max_number="1"/>\n', 30)
    # Add goal monitor components to the project in the CMakeLists.txt file
    str0 = 'add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/GoalMonitorPort/")\n'
    str1 = 'add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/GoalMonitor/")\n'
    str2 = 'add_fprime_subdirectory("${CMAKE_CURRENT_LIST_DIR}/' + components[0] + '/")\n'
    replace_file("../CMakeLists.txt", str2, str2 + str0)
    replace_file("../CMakeLists.txt", str2, str2 + str1)