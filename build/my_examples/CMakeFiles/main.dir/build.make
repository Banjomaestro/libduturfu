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
include my_examples/CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include my_examples/CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include my_examples/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include my_examples/CMakeFiles/main.dir/flags.make

my_examples/CMakeFiles/main.dir/src/main.cpp.o: my_examples/CMakeFiles/main.dir/flags.make
<<<<<<< HEAD
my_examples/CMakeFiles/main.dir/src/main.cpp.o: /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/my_examples/src/main.cpp
my_examples/CMakeFiles/main.dir/src/main.cpp.o: my_examples/CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object my_examples/CMakeFiles/main.dir/src/main.cpp.o"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT my_examples/CMakeFiles/main.dir/src/main.cpp.o -MF CMakeFiles/main.dir/src/main.cpp.o.d -o CMakeFiles/main.dir/src/main.cpp.o -c /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/my_examples/src/main.cpp

my_examples/CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/my_examples/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

my_examples/CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/my_examples/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s
=======
my_examples/CMakeFiles/main.dir/src/main.cpp.o: /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/my_examples/src/main.cpp
my_examples/CMakeFiles/main.dir/src/main.cpp.o: my_examples/CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object my_examples/CMakeFiles/main.dir/src/main.cpp.o"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT my_examples/CMakeFiles/main.dir/src/main.cpp.o -MF CMakeFiles/main.dir/src/main.cpp.o.d -o CMakeFiles/main.dir/src/main.cpp.o -c /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/my_examples/src/main.cpp

my_examples/CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/my_examples/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

my_examples/CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/my_examples/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

bin/main: my_examples/CMakeFiles/main.dir/src/main.cpp.o
bin/main: my_examples/CMakeFiles/main.dir/build.make
bin/main: INTERFACE/libRationnels.a
bin/main: my_examples/CMakeFiles/main.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/main"
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/main"
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7

# Rule to build all files generated by this target.
my_examples/CMakeFiles/main.dir/build: bin/main
.PHONY : my_examples/CMakeFiles/main.dir/build

my_examples/CMakeFiles/main.dir/clean:
<<<<<<< HEAD
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : my_examples/CMakeFiles/main.dir/clean

my_examples/CMakeFiles/main.dir/depend:
	cd /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/my_examples /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples /Users/mac/Documents/lessons/imac/second_year/first_semester/libduturfu/build/my_examples/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : my_examples/CMakeFiles/main.dir/clean

my_examples/CMakeFiles/main.dir/depend:
	cd /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/my_examples /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples /Users/keziahapaloo-kingslove/Documents/IMAC/Semestre_3/Projet_info_maths/libduturfu/build/my_examples/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> 6be7a9cff41a467bc0dd97e4d1ece20e73925fe7
.PHONY : my_examples/CMakeFiles/main.dir/depend

