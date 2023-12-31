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
include F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/flags.make

F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.hpp: F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml
F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.hpp: /home/fprime/fprime/config/AcConstants.ini
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating LinuxI2cDriverComponentAc.hpp, LinuxI2cDriverComponentAc.cpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /snap/cmake/1288/bin/cmake -E env PYTHONPATH=/home/fprime/fprime/Autocoders/Python/src:/home/fprime/fprime/Autocoders/Python/utils BUILD_ROOT=/home/fprime/fprime:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/home/fprime/fprime/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/home/fprime/fprime/Autocoders/Python /home/fprime/fprime/MotionActivatedLight/env/bin/python3 /home/fprime/fprime/Autocoders/Python/bin/codegen.py -p /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver --build_root /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml

F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp: F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp

F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml: /home/fprime/fprime/Drv/LinuxI2cDriver/LinuxI2cDriver.fpp
F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml: lib/Linux/libDrv_I2cDriverPorts.a
F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml: lib/Linux/libOs.a
F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating LinuxI2cDriverComponentAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver -i /home/fprime/fprime/Drv/I2cDriverPorts/I2cDriverPorts.fpp,/home/fprime/fprime/Fw/Buffer/Buffer.fpp /home/fprime/fprime/Drv/LinuxI2cDriver/LinuxI2cDriver.fpp -p /home/fprime/fprime

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/flags.make
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o: /home/fprime/fprime/Drv/LinuxI2cDriver/LinuxI2cDriver.cpp
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7bdf70c2 -DASSERT_RELATIVE_PATH='"Drv/LinuxI2cDriver/LinuxI2cDriver.cpp"' -MD -MT F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o -MF CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o.d -o CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o -c /home/fprime/fprime/Drv/LinuxI2cDriver/LinuxI2cDriver.cpp

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.i"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7bdf70c2 -DASSERT_RELATIVE_PATH='"Drv/LinuxI2cDriver/LinuxI2cDriver.cpp"' -E /home/fprime/fprime/Drv/LinuxI2cDriver/LinuxI2cDriver.cpp > CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.i

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.s"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x7bdf70c2 -DASSERT_RELATIVE_PATH='"Drv/LinuxI2cDriver/LinuxI2cDriver.cpp"' -S /home/fprime/fprime/Drv/LinuxI2cDriver/LinuxI2cDriver.cpp -o CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.s

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/flags.make
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o: F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x15aba126 -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp"' -MD -MT F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o -MF CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o.d -o CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o -c /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.i"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x15aba126 -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp"' -E /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp > CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.i

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.s"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x15aba126 -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp"' -S /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp -o CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.s

# Object files for target Drv_LinuxI2cDriver
Drv_LinuxI2cDriver_OBJECTS = \
"CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o" \
"CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o"

# External object files for target Drv_LinuxI2cDriver
Drv_LinuxI2cDriver_EXTERNAL_OBJECTS =

lib/Linux/libDrv_LinuxI2cDriver.a: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriver.cpp.o
lib/Linux/libDrv_LinuxI2cDriver.a: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/LinuxI2cDriverComponentAc.cpp.o
lib/Linux/libDrv_LinuxI2cDriver.a: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/build.make
lib/Linux/libDrv_LinuxI2cDriver.a: F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libDrv_LinuxI2cDriver.a"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxI2cDriver.dir/cmake_clean_target.cmake
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drv_LinuxI2cDriver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/build: lib/Linux/libDrv_LinuxI2cDriver.a
.PHONY : F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/build

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver && $(CMAKE_COMMAND) -P CMakeFiles/Drv_LinuxI2cDriver.dir/cmake_clean.cmake
.PHONY : F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/clean

F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/depend: F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.cpp
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/depend: F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAc.hpp
F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/depend: F-Prime/Drv/LinuxI2cDriver/LinuxI2cDriverComponentAi.xml
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Drv/LinuxI2cDriver /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Drv/LinuxI2cDriver/CMakeFiles/Drv_LinuxI2cDriver.dir/depend

