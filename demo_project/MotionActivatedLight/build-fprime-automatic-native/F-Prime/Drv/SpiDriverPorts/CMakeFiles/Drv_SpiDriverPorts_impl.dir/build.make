# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1288/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1288/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fprime/fprime/MotionActivatedLight

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native

# Utility rule file for Drv_SpiDriverPorts_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/progress.make

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp

F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp: /home/fprime/fprime/Drv/SpiDriverPorts/SpiDriverPorts.fpp
F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp: lib/Linux/libFw_Buffer.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SpiReadWritePortAc.cpp, SpiReadWritePortAc.hpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-cpp -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts -i /home/fprime/fprime/Fw/Buffer/Buffer.fpp /home/fprime/fprime/Drv/SpiDriverPorts/SpiDriverPorts.fpp -p /home/fprime/fprime,/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native

F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp

F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml: /home/fprime/fprime/Drv/SpiDriverPorts/SpiDriverPorts.fpp
F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml: lib/Linux/libFw_Buffer.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SpiReadWritePortAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts -i /home/fprime/fprime/Fw/Buffer/Buffer.fpp /home/fprime/fprime/Drv/SpiDriverPorts/SpiDriverPorts.fpp -p /home/fprime/fprime

Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl
Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.cpp
Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAc.hpp
Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/SpiReadWritePortAi.xml
Drv_SpiDriverPorts_impl: F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/build.make
.PHONY : Drv_SpiDriverPorts_impl

# Rule to build all files generated by this target.
F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/build: Drv_SpiDriverPorts_impl
.PHONY : F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/build

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts && $(CMAKE_COMMAND) -P CMakeFiles/Drv_SpiDriverPorts_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/clean

F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/depend:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Drv/SpiDriverPorts /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Drv/SpiDriverPorts/CMakeFiles/Drv_SpiDriverPorts_impl.dir/depend

