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
include F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/compiler_depend.make

# Include the progress variables for this target.
include F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/progress.make

# Include the compile flags for this target's objects.
include F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/flags.make

F-Prime/Svc/PolyDb/PolyDbComponentAc.hpp: F-Prime/Svc/PolyDb/PolyDbComponentAi.xml
F-Prime/Svc/PolyDb/PolyDbComponentAc.hpp: /home/fprime/fprime/config/AcConstants.ini
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating PolyDbComponentAc.hpp, PolyDbComponentAc.cpp"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /snap/cmake/1288/bin/cmake -E env PYTHONPATH=/home/fprime/fprime/Autocoders/Python/src:/home/fprime/fprime/Autocoders/Python/utils BUILD_ROOT=/home/fprime/fprime:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native:/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime FPRIME_AC_CONSTANTS_FILE=/home/fprime/fprime/config/AcConstants.ini PYTHON_AUTOCODER_DIR=/home/fprime/fprime/Autocoders/Python /home/fprime/fprime/MotionActivatedLight/env/bin/python3 /home/fprime/fprime/Autocoders/Python/bin/codegen.py -p /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb --build_root /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAi.xml

F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp: F-Prime/Svc/PolyDb/PolyDbComponentAc.hpp
	@$(CMAKE_COMMAND) -E touch_nocreate F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp

F-Prime/Svc/PolyDb/PolyDbComponentAi.xml: /home/fprime/fprime/Svc/PolyDb/PolyDb.fpp
F-Prime/Svc/PolyDb/PolyDbComponentAi.xml: lib/Linux/libSvc_PolyIf.a
F-Prime/Svc/PolyDb/PolyDbComponentAi.xml: lib/Linux/libOs.a
F-Prime/Svc/PolyDb/PolyDbComponentAi.xml: lib/Linux/libFw_Comp.a
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating PolyDbComponentAi.xml"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /home/fprime/fprime/MotionActivatedLight/env/bin/fpp-to-xml -d /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb -i /home/fprime/fprime/Fw/Time/Time.fpp,/home/fprime/fprime/Fw/Types/Types.fpp,/home/fprime/fprime/Svc/PolyIf/PolyIf.fpp /home/fprime/fprime/Svc/PolyDb/PolyDb.fpp -p /home/fprime/fprime

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/flags.make
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o: /home/fprime/fprime/Svc/PolyDb/PolyDbImpl.cpp
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x5b04eb5c -DASSERT_RELATIVE_PATH='"Svc/PolyDb/PolyDbImpl.cpp"' -MD -MT F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o -MF CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o.d -o CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o -c /home/fprime/fprime/Svc/PolyDb/PolyDbImpl.cpp

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.i"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x5b04eb5c -DASSERT_RELATIVE_PATH='"Svc/PolyDb/PolyDbImpl.cpp"' -E /home/fprime/fprime/Svc/PolyDb/PolyDbImpl.cpp > CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.i

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.s"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x5b04eb5c -DASSERT_RELATIVE_PATH='"Svc/PolyDb/PolyDbImpl.cpp"' -S /home/fprime/fprime/Svc/PolyDb/PolyDbImpl.cpp -o CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.s

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/flags.make
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o: F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4150aa4e -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp"' -MD -MT F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o -MF CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o.d -o CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o -c /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.i"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4150aa4e -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp"' -E /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp > CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.i

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.s"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DASSERT_FILE_ID=0x4150aa4e -DASSERT_RELATIVE_PATH='"MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp"' -S /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp -o CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.s

# Object files for target Svc_PolyDb
Svc_PolyDb_OBJECTS = \
"CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o" \
"CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o"

# External object files for target Svc_PolyDb
Svc_PolyDb_EXTERNAL_OBJECTS =

lib/Linux/libSvc_PolyDb.a: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbImpl.cpp.o
lib/Linux/libSvc_PolyDb.a: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/PolyDbComponentAc.cpp.o
lib/Linux/libSvc_PolyDb.a: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/build.make
lib/Linux/libSvc_PolyDb.a: F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/Linux/libSvc_PolyDb.a"
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PolyDb.dir/cmake_clean_target.cmake
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Svc_PolyDb.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/build: lib/Linux/libSvc_PolyDb.a
.PHONY : F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/build

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/clean:
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb && $(CMAKE_COMMAND) -P CMakeFiles/Svc_PolyDb.dir/cmake_clean.cmake
.PHONY : F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/clean

F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/depend: F-Prime/Svc/PolyDb/PolyDbComponentAc.cpp
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/depend: F-Prime/Svc/PolyDb/PolyDbComponentAc.hpp
F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/depend: F-Prime/Svc/PolyDb/PolyDbComponentAi.xml
	cd /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fprime/fprime/MotionActivatedLight /home/fprime/fprime/Svc/PolyDb /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb /home/fprime/fprime/MotionActivatedLight/build-fprime-automatic-native/F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : F-Prime/Svc/PolyDb/CMakeFiles/Svc_PolyDb.dir/depend

