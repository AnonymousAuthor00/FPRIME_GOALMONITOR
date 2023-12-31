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

# Utility rule file for Fw_Buffer_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/progress.make

F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferGetPortAi.xml
F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferSendPortAi.xml
F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferGetPortAc.cpp
F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferGetPortAc.hpp
F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferSendPortAc.cpp
F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferSendPortAc.hpp

F-Prime/Fw/Buffer/BufferGetPortAc.cpp: /home/fprime/fprime/Fw/Buffer/Buffer.fpp
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Prm.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Cmd.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Log.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Tlm.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Com.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Time.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Port.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Types.a
F-Prime/Fw/Buffer/BufferGetPortAc.cpp: lib/Linux/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating BufferGetPortAc.cpp, BufferGetPortAc.hpp, BufferSendPortAc.cpp, BufferSendPortAc.hpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-cpp -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer /home/fprime/fprime/Fw/Buffer/Buffer.fpp -p /home/fprime/fprime,/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native

F-Prime/Fw/Buffer/BufferGetPortAc.hpp: F-Prime/Fw/Buffer/BufferGetPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Buffer/BufferGetPortAc.hpp

F-Prime/Fw/Buffer/BufferSendPortAc.cpp: F-Prime/Fw/Buffer/BufferGetPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Buffer/BufferSendPortAc.cpp

F-Prime/Fw/Buffer/BufferSendPortAc.hpp: F-Prime/Fw/Buffer/BufferGetPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Buffer/BufferSendPortAc.hpp

F-Prime/Fw/Buffer/BufferGetPortAi.xml: /home/fprime/fprime/Fw/Buffer/Buffer.fpp
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Prm.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Cmd.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Log.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Com.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Time.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Port.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Types.a
F-Prime/Fw/Buffer/BufferGetPortAi.xml: lib/Linux/libFw_Cfg.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating BufferGetPortAi.xml, BufferSendPortAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer /home/fprime/fprime/Fw/Buffer/Buffer.fpp -p /home/fprime/fprime

F-Prime/Fw/Buffer/BufferSendPortAi.xml: F-Prime/Fw/Buffer/BufferGetPortAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Fw/Buffer/BufferSendPortAi.xml

Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferGetPortAc.cpp
Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferGetPortAc.hpp
Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferGetPortAi.xml
Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferSendPortAc.cpp
Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferSendPortAc.hpp
Fw_Buffer_impl: F-Prime/Fw/Buffer/BufferSendPortAi.xml
Fw_Buffer_impl: F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl
Fw_Buffer_impl: F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/build.make
.PHONY : Fw_Buffer_impl

# Rule to build all files generated by this target.
F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/build: Fw_Buffer_impl
.PHONY : F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/build

F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer && $(CMAKE_COMMAND) -P CMakeFiles/Fw_Buffer_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/clean

F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/depend:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Fw/Buffer /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Fw/Buffer/CMakeFiles/Fw_Buffer_impl.dir/depend

