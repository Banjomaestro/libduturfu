# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.24.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.24.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
<<<<<<< HEAD
CMAKE_SOURCE_DIR = /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build
=======
CMAKE_SOURCE_DIR = /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

# Include any dependencies generated for this target.
include INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/compiler_depend.make

# Include the progress variables for this target.
include INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/progress.make

# Include the compile flags for this target's objects.
include INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/flags.make

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o: INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/flags.make
<<<<<<< HEAD
INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o: /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/UnitTest/src/test.cpp
INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o: INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o -MF CMakeFiles/UnitTest.dir/src/test.cpp.o.d -o CMakeFiles/UnitTest.dir/src/test.cpp.o -c /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/UnitTest/src/test.cpp

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnitTest.dir/src/test.cpp.i"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/UnitTest/src/test.cpp > CMakeFiles/UnitTest.dir/src/test.cpp.i

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnitTest.dir/src/test.cpp.s"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/UnitTest/src/test.cpp -o CMakeFiles/UnitTest.dir/src/test.cpp.s
=======
INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o: /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/Rationnels/UnitTest/src/test.cpp
INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o: INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o -MF CMakeFiles/UnitTest.dir/src/test.cpp.o.d -o CMakeFiles/UnitTest.dir/src/test.cpp.o -c /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/Rationnels/UnitTest/src/test.cpp

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UnitTest.dir/src/test.cpp.i"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/Rationnels/UnitTest/src/test.cpp > CMakeFiles/UnitTest.dir/src/test.cpp.i

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UnitTest.dir/src/test.cpp.s"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/Rationnels/UnitTest/src/test.cpp -o CMakeFiles/UnitTest.dir/src/test.cpp.s
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

# Object files for target UnitTest
UnitTest_OBJECTS = \
"CMakeFiles/UnitTest.dir/src/test.cpp.o"

# External object files for target UnitTest
UnitTest_EXTERNAL_OBJECTS =

bin/UnitTest: INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/src/test.cpp.o
bin/UnitTest: INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/build.make
bin/UnitTest: INTERFACE/libRationnels.a
bin/UnitTest: /usr/local/lib/libgtest_main.a
bin/UnitTest: /usr/local/lib/libgtest.a
bin/UnitTest: INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/UnitTest"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UnitTest.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest && /usr/local/Cellar/cmake/3.24.2/bin/cmake -D TEST_TARGET=UnitTest -D TEST_EXECUTABLE=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/bin/UnitTest -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=UnitTest_TESTS -D CTEST_FILE=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest/UnitTest[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/local/Cellar/cmake/3.24.2/share/cmake/Modules/GoogleTestAddTests.cmake
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/UnitTest"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/UnitTest.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest && /usr/local/Cellar/cmake/3.24.2/bin/cmake -D TEST_TARGET=UnitTest -D TEST_EXECUTABLE=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/bin/UnitTest -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=UnitTest_TESTS -D CTEST_FILE=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest/UnitTest[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/local/Cellar/cmake/3.24.2/share/cmake/Modules/GoogleTestAddTests.cmake
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

# Rule to build all files generated by this target.
INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/build: bin/UnitTest
.PHONY : INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/build

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/clean:
<<<<<<< HEAD
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest && $(CMAKE_COMMAND) -P CMakeFiles/UnitTest.dir/cmake_clean.cmake
.PHONY : INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/clean

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/depend:
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/UnitTest /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest && $(CMAKE_COMMAND) -P CMakeFiles/UnitTest.dir/cmake_clean.cmake
.PHONY : INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/clean

INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/depend:
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/Rationnels/UnitTest /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7
.PHONY : INTERFACE/UnitTest/CMakeFiles/UnitTest.dir/depend

