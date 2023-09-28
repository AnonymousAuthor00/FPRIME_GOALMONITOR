import pandas as pd
import os
import sys


def find_class(path, str):
    for file_name in os.listdir(path):
        if file_name.endswith(str):
            return file_name


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
    with open(filename, "r+") as file:
        lines = file.readlines()
        lines.insert(number - 1, str)
    with open(filename, "w") as file:
        file.writelines(lines)


def capitalize(string):
    return string[:1].capitalize() + string[1:]


if __name__ == "__main__":
    project_name = sys.argv[1]
    df = pd.read_csv('model.csv')
    components = []
    filename = find_file("../Top/", "AppAi.xml")
    for number in df['GoalNumber']:
        component_ = df[df['GoalNumber'] == number]['Component']
        component = [str(x) for x in component_][0]
        if component != 'Null':
            if component not in components:
                # Add instances
                line = find_string(filename, "<import_component_type>")
                append_file(filename, f"   <import_component_type>{project_name}/GoalMonitor/GoalMonitorComponentAi.xml</import_component_type>\n",line)
                line = find_string(filename, "<instance")
                append_file(filename, f'   <instance namespace="{project_name}" name="goalMonitor" type="GoalMonitor" base_id="5000"  base_id_window="5" />\n',line)
                # Add connection
                line = find_string(filename, "<connection")
                append_file(filename, f'   </connection>\n', line)
                append_file(filename, f'        <target component="goalMonitor" port="BIn" type="PortB" num="0"/>\n', line)
                append_file(filename, f'        <source component="{component}" port="BOut" type="PortB" num="0"/>\n', line)
                append_file(filename, f'   <connection name = "{component}B">\n', line)
                append_file(filename, f'   </connection>\n', line)
                append_file(filename, f'        <target component="goalMonitor" port="FIn" type="PortF" num="0"/>\n', line)
                append_file(filename, f'        <source component="{component}" port="FOut" type="PortF" num="0"/>\n', line)
                append_file(filename, f'   <connection name = "{component}F">\n', line)
                append_file(filename, f'   </connection>\n', line)
                append_file(filename, f'        <target component="goalMonitor" port="UIn" type="PortU" num="0"/>\n', line)
                append_file(filename, f'        <source component="{component}" port="UOut" type="PortU" num="0"/>\n', line)
                append_file(filename, f'   <connection name = "{component}U">\n', line)
                components.append(component)
            # Update goal monitor connection
            line = find_string(filename, "<connection")
            append_file(filename, f'   </connection>\n', line)
            append_file(filename, f'        <target component="{component}" port="varReq{str(number)}In" type="VarReq" num="0"/>\n', line)
            append_file(filename, f'        <source component="goalMonitor" port="varReq{str(number)}Out" type="VarReq" num="0"/>\n', line)
            append_file(filename, f'   <connection name = "VarReq{str(number)}">\n', line)
    line = find_string(filename, "<connection")
    append_file(filename, f'   </connection>\n', line)
    append_file(filename, f'        <target component="goalMonitor" port="cmdIn" type="[unused]" num="0"/>\n', line)
    append_file(filename, f'        <source component="cmdDisp" port="compCmdSend" type="[unused]" num="4"/>\n', line)
    append_file(filename, f'   <connection name = "[unused]">\n', line)
    append_file(filename, f'   </connection>\n', line)
    append_file(filename, f'        <target component="cmdDisp" port="compCmdReg" type="[unused]" num="4"/>\n', line)
    append_file(filename, f'        <source component="goalMonitor" port="cmdRegOut" type="[unused]" num="0"/>\n', line)
    append_file(filename, f'   <connection name = "[unused]">\n', line)
    append_file(filename, f'   </connection>\n', line)
    append_file(filename, f'        <target component="cmdDisp" port="compCmdStat" type="[unused]" num="4"/>\n', line)
    append_file(filename, f'        <source component="goalMonitor" port="cmdResponseOut" type="[unused]" num="0"/>\n', line)
    append_file(filename, f'   <connection name = "[unused]">\n', line)
    append_file(filename, f'   </connection>\n', line)
    append_file(filename, f'        <target component="eventLogger" port="LogRecv" type="[unused]" num="6"/>\n', line)
    append_file(filename, f'        <source component="goalMonitor" port="eventOut" type="[unused]" num="0"/>\n', line)
    append_file(filename, f'   <connection name = "[unused]">\n', line)
    line = find_string("../Top/Components.hpp", "extern")
    append_file("../Top/Components.hpp", f'extern GoalMonitor::GoalMonitorImpl goalMonitor;\n', line)
    append_file("../Top/Components.hpp", f'#include <{project_name}/GoalMonitor/GoalMonitorImpl.hpp>', line - 1)