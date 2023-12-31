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

# Utility rule file for Svc_Sched_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/progress.make

F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl: F-Prime/Svc/Sched/SchedPortAi.xml
F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl: F-Prime/Svc/Sched/SchedPortAc.cpp
F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl: F-Prime/Svc/Sched/SchedPortAc.hpp

F-Prime/Svc/Sched/SchedPortAc.cpp: /home/fprime/fprime/Svc/Sched/Sched.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating SchedPortAc.cpp, SchedPortAc.hpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-cpp -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched -i /home/fprime/fprime/config/FpConfig.fpp /home/fprime/fprime/Svc/Sched/Sched.fpp -p /home/fprime/fprime,/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native

F-Prime/Svc/Sched/SchedPortAc.hpp: F-Prime/Svc/Sched/SchedPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/Sched/SchedPortAc.hpp

F-Prime/Svc/Sched/SchedPortAi.xml: /home/fprime/fprime/Svc/Sched/Sched.fpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating SchedPortAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched -i /home/fprime/fprime/config/FpConfig.fpp /home/fprime/fprime/Svc/Sched/Sched.fpp -p /home/fprime/fprime

Svc_Sched_impl: F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl
Svc_Sched_impl: F-Prime/Svc/Sched/SchedPortAc.cpp
Svc_Sched_impl: F-Prime/Svc/Sched/SchedPortAc.hpp
Svc_Sched_impl: F-Prime/Svc/Sched/SchedPortAi.xml
Svc_Sched_impl: F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/build.make
.PHONY : Svc_Sched_impl

# Rule to build all files generated by this target.
F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/build: Svc_Sched_impl
.PHONY : F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/build

F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched && $(CMAKE_COMMAND) -P CMakeFiles/Svc_Sched_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/clean

F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/depend:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Svc/Sched /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Svc/Sched/CMakeFiles/Svc_Sched_impl.dir/depend

