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

# Include any dependencies generated for this target.
include F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/flags.make

F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.hpp: F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.hpp: /home/fprime/fprime/config/AcConstants.ini
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating TlmPacketizerComponentAc.hpp, TlmPacketizerComponentAc.cpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /snap/cmake/1288/bin/cmake -E env PYTHONPATH=/home/fprime/fprime/Autocoders/Python/src:/home/fprime/fprime/Autocoders/Python/utils BUILD_ROOT=/home/fprime/fprime:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/home/fprime/fprime/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/home/fprime/fprime/Autocoders/Python /home/fprime/fprime/MotionActivatedLight/env/bin/python3 /home/fprime/fprime/Autocoders/Python/bin/codegen.py -p /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer --build_root /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml

F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp: F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp

F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: /home/fprime/fprime/Svc/TlmPacketizer/TlmPacketizer.fpp
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libFw_Cmd.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libFw_Com.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libFw_Log.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libFw_Tlm.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libSvc_Ping.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libSvc_Sched.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libFw_CompQueued.a
F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml: lib/Linux/libOs.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating TlmPacketizerComponentAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer -i /home/fprime/fprime/Fw/Cmd/Cmd.fpp,/home/fprime/fprime/Fw/Com/Com.fpp,/home/fprime/fprime/Fw/Log/Log.fpp,/home/fprime/fprime/Fw/Time/Time.fpp,/home/fprime/fprime/Fw/Tlm/Tlm.fpp,/home/fprime/fprime/Svc/Ping/Ping.fpp,/home/fprime/fprime/Svc/Sched/Sched.fpp,/home/fprime/fprime/config/FpConfig.fpp /home/fprime/fprime/Svc/TlmPacketizer/TlmPacketizer.fpp -p /home/fprime/fprime

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/flags.make
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o: /home/fprime/fprime/Svc/TlmPacketizer/TlmPacketizer.cpp
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xcaf4878b -DASSERT_RELATIVE_PATH='"Svc/TlmPacketizer/TlmPacketizer.cpp"' -MD -MT F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o -MF CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o.d -o CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o -c /home/fprime/fprime/Svc/TlmPacketizer/TlmPacketizer.cpp

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.i"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xcaf4878b -DASSERT_RELATIVE_PATH='"Svc/TlmPacketizer/TlmPacketizer.cpp"' -E /home/fprime/fprime/Svc/TlmPacketizer/TlmPacketizer.cpp > CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.i

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.s"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xcaf4878b -DASSERT_RELATIVE_PATH='"Svc/TlmPacketizer/TlmPacketizer.cpp"' -S /home/fprime/fprime/Svc/TlmPacketizer/TlmPacketizer.cpp -o CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.s

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/flags.make
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o: F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa6fba62e -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp"' -MD -MT F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o -MF CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o.d -o CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o -c /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.i"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa6fba62e -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp"' -E /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp > CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.i

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.s"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0xa6fba62e -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp"' -S /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp -o CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.s

# Object files for target Svc_TlmPacketizer
Svc_TlmPacketizer_OBJECTS = \
"CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o" \
"CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o"

# External object files for target Svc_TlmPacketizer
Svc_TlmPacketizer_EXTERNAL_OBJECTS =

lib/Linux/libSvc_TlmPacketizer.a: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizer.cpp.o
lib/Linux/libSvc_TlmPacketizer.a: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/TlmPacketizerComponentAc.cpp.o
lib/Linux/libSvc_TlmPacketizer.a: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/build.make
lib/Linux/libSvc_TlmPacketizer.a: F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_TlmPacketizer.a"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && $(CMAKE_COMMAND) -P CMakeFiles/Svc_TlmPacketizer.dir/cmake_clean_target.cmake
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_TlmPacketizer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/build: lib/Linux/libSvc_TlmPacketizer.a
.PHONY : F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/build

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer && $(CMAKE_COMMAND) -P CMakeFiles/Svc_TlmPacketizer.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/clean

F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/depend: F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.cpp
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/depend: F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAc.hpp
F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/depend: F-Prime/Svc/TlmPacketizer/TlmPacketizerComponentAi.xml
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Svc/TlmPacketizer /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Svc/TlmPacketizer/CMakeFiles/Svc_TlmPacketizer.dir/depend

