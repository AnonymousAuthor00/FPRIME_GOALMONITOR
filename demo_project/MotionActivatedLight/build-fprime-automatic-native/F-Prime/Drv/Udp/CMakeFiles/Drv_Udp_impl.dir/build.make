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

# Utility rule file for Drv_Udp_impl.

# Include any custom commands dependencies for this target.
include F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/progress.make

F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamPollPortAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamReadyPortAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamRecvPortAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamSendPortAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/PollStatusEnumAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/RecvStatusEnumAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/SendStatusEnumAi.xml
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamPollPortAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamReadyPortAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamReadyPortAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamRecvPortAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamRecvPortAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamSendPortAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamSendPortAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/PollStatusEnumAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/PollStatusEnumAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/RecvStatusEnumAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/RecvStatusEnumAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/SendStatusEnumAc.cpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: F-Prime/Drv/Udp/SendStatusEnumAc.hpp
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.hpp-template
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl: /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.cpp-template

/home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.hpp-template: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.hpp-template, /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.cpp-template"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp && /snap/cmake/1288/bin/cmake -E env PYTHONPATH=/home/fprime/fprime/Autocoders/Python/src:/home/fprime/fprime/Autocoders/Python/utils BUILD_ROOT=/home/fprime/fprime:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/home/fprime/fprime/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/home/fprime/fprime/Autocoders/Python /home/fprime/fprime/MotionActivatedLight/env/bin/python3 /home/fprime/fprime/Autocoders/Python/bin/codegen.py -p /home/fprime/fprime/Drv/Udp --build_root -t /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml

/home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.cpp-template: /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.hpp-template
	@$(CMAKE_COMMAND) -E touch_nocreate /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.cpp-template

F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml: /home/fprime/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp
F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml: lib/Linux/libFw_Buffer.a
F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml: lib/Linux/libOs.a
F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ByteStreamDriverModelComponentAi.xml, ByteStreamPollPortAi.xml, ByteStreamReadyPortAi.xml, ByteStreamRecvPortAi.xml, ByteStreamSendPortAi.xml, PollStatusEnumAi.xml, RecvStatusEnumAi.xml, SendStatusEnumAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp -i /home/fprime/fprime/Fw/Buffer/Buffer.fpp /home/fprime/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp -p /home/fprime/fprime

F-Prime/Drv/Udp/ByteStreamPollPortAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamPollPortAi.xml

F-Prime/Drv/Udp/ByteStreamReadyPortAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamReadyPortAi.xml

F-Prime/Drv/Udp/ByteStreamRecvPortAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamRecvPortAi.xml

F-Prime/Drv/Udp/ByteStreamSendPortAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamSendPortAi.xml

F-Prime/Drv/Udp/PollStatusEnumAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/PollStatusEnumAi.xml

F-Prime/Drv/Udp/RecvStatusEnumAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/RecvStatusEnumAi.xml

F-Prime/Drv/Udp/SendStatusEnumAi.xml: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/SendStatusEnumAi.xml

F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp: /home/fprime/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp
F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp: lib/Linux/libFw_Buffer.a
F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp: lib/Linux/libOs.a
F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ByteStreamPollPortAc.cpp, ByteStreamPollPortAc.hpp, ByteStreamReadyPortAc.cpp, ByteStreamReadyPortAc.hpp, ByteStreamRecvPortAc.cpp, ByteStreamRecvPortAc.hpp, ByteStreamSendPortAc.cpp, ByteStreamSendPortAc.hpp, PollStatusEnumAc.cpp, PollStatusEnumAc.hpp, RecvStatusEnumAc.cpp, RecvStatusEnumAc.hpp, SendStatusEnumAc.cpp, SendStatusEnumAc.hpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-cpp -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp -i /home/fprime/fprime/Fw/Buffer/Buffer.fpp /home/fprime/fprime/Drv/ByteStreamDriverModel/ByteStreamDriverModel.fpp -p /home/fprime/fprime,/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native

F-Prime/Drv/Udp/ByteStreamPollPortAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamPollPortAc.hpp

F-Prime/Drv/Udp/ByteStreamReadyPortAc.cpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamReadyPortAc.cpp

F-Prime/Drv/Udp/ByteStreamReadyPortAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamReadyPortAc.hpp

F-Prime/Drv/Udp/ByteStreamRecvPortAc.cpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamRecvPortAc.cpp

F-Prime/Drv/Udp/ByteStreamRecvPortAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamRecvPortAc.hpp

F-Prime/Drv/Udp/ByteStreamSendPortAc.cpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamSendPortAc.cpp

F-Prime/Drv/Udp/ByteStreamSendPortAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/ByteStreamSendPortAc.hpp

F-Prime/Drv/Udp/PollStatusEnumAc.cpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/PollStatusEnumAc.cpp

F-Prime/Drv/Udp/PollStatusEnumAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/PollStatusEnumAc.hpp

F-Prime/Drv/Udp/RecvStatusEnumAc.cpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/RecvStatusEnumAc.cpp

F-Prime/Drv/Udp/RecvStatusEnumAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/RecvStatusEnumAc.hpp

F-Prime/Drv/Udp/SendStatusEnumAc.cpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/SendStatusEnumAc.cpp

F-Prime/Drv/Udp/SendStatusEnumAc.hpp: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/Udp/SendStatusEnumAc.hpp

Drv_Udp_impl: /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.cpp-template
Drv_Udp_impl: /home/fprime/fprime/Drv/Udp/ByteStreamDriverModelComponentImpl.hpp-template
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamDriverModelComponentAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamPollPortAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamPollPortAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamPollPortAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamReadyPortAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamReadyPortAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamReadyPortAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamRecvPortAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamRecvPortAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamRecvPortAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamSendPortAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamSendPortAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/ByteStreamSendPortAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl
Drv_Udp_impl: F-Prime/Drv/Udp/PollStatusEnumAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/PollStatusEnumAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/PollStatusEnumAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/RecvStatusEnumAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/RecvStatusEnumAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/RecvStatusEnumAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/SendStatusEnumAc.cpp
Drv_Udp_impl: F-Prime/Drv/Udp/SendStatusEnumAc.hpp
Drv_Udp_impl: F-Prime/Drv/Udp/SendStatusEnumAi.xml
Drv_Udp_impl: F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/build.make
.PHONY : Drv_Udp_impl

# Rule to build all files generated by this target.
F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/build: Drv_Udp_impl
.PHONY : F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/build

F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp && $(CMAKE_COMMAND) -P CMakeFiles/Drv_Udp_impl.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/clean

F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/depend:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Drv/Udp /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Drv/Udp/CMakeFiles/Drv_Udp_impl.dir/depend
