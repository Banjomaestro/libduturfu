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
CMAKE_SOURCE_DIR = /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build

# Include any dependencies generated for this target.
include INTERFACE/CMakeFiles/Rationnels.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include INTERFACE/CMakeFiles/Rationnels.dir/compiler_depend.make

# Include the progress variables for this target.
include INTERFACE/CMakeFiles/Rationnels.dir/progress.make

# Include the compile flags for this target's objects.
include INTERFACE/CMakeFiles/Rationnels.dir/flags.make

INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o: INTERFACE/CMakeFiles/Rationnels.dir/flags.make
INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o: /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/src/Rationnels.cpp
INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o: INTERFACE/CMakeFiles/Rationnels.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o -MF CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o.d -o CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o -c /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/src/Rationnels.cpp

INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Rationnels.dir/src/Rationnels.cpp.i"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/src/Rationnels.cpp > CMakeFiles/Rationnels.dir/src/Rationnels.cpp.i

INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Rationnels.dir/src/Rationnels.cpp.s"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels/src/Rationnels.cpp -o CMakeFiles/Rationnels.dir/src/Rationnels.cpp.s

# Object files for target Rationnels
Rationnels_OBJECTS = \
"CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o"

# External object files for target Rationnels
Rationnels_EXTERNAL_OBJECTS =

INTERFACE/libRationnels.a: INTERFACE/CMakeFiles/Rationnels.dir/src/Rationnels.cpp.o
INTERFACE/libRationnels.a: INTERFACE/CMakeFiles/Rationnels.dir/build.make
INTERFACE/libRationnels.a: INTERFACE/CMakeFiles/Rationnels.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libRationnels.a"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE && $(CMAKE_COMMAND) -P CMakeFiles/Rationnels.dir/cmake_clean_target.cmake
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rationnels.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
INTERFACE/CMakeFiles/Rationnels.dir/build: INTERFACE/libRationnels.a
.PHONY : INTERFACE/CMakeFiles/Rationnels.dir/build

INTERFACE/CMakeFiles/Rationnels.dir/clean:
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE && $(CMAKE_COMMAND) -P CMakeFiles/Rationnels.dir/cmake_clean.cmake
.PHONY : INTERFACE/CMakeFiles/Rationnels.dir/clean

INTERFACE/CMakeFiles/Rationnels.dir/depend:
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/Rationnels /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/INTERFACE/CMakeFiles/Rationnels.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : INTERFACE/CMakeFiles/Rationnels.dir/depend

