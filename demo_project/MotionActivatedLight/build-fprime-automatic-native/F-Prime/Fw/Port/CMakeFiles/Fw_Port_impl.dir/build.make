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

# Utility rule file for Fw_Port_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/progress.make

Fw_Port_impl: F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/build.make
.PHONY : Fw_Port_impl

# Rule to build all files generated by this target.
F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/build: Fw_Port_impl
.PHONY : F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/build

F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Port && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Port_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/clean

F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/depend:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Fw/Port /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Port /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Fw/Port/CMakeFiles/Fw_Port_impl.dir/depend

