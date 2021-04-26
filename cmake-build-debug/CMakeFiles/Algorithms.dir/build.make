# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/ahmad-lap/Programs/CLion-2020.3.3/clion-2020.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ahmad-lap/Programs/CLion-2020.3.3/clion-2020.3.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Algorithms.dir/flags.make

CMakeFiles/Algorithms.dir/main.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algorithms.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Algorithms.dir/main.cpp.o -c "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/main.cpp"

CMakeFiles/Algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/main.cpp" > CMakeFiles/Algorithms.dir/main.cpp.i

CMakeFiles/Algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/main.cpp" -o CMakeFiles/Algorithms.dir/main.cpp.s

CMakeFiles/Algorithms.dir/src/Helpers.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/src/Helpers.cpp.o: ../src/Helpers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Algorithms.dir/src/Helpers.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Algorithms.dir/src/Helpers.cpp.o -c "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/src/Helpers.cpp"

CMakeFiles/Algorithms.dir/src/Helpers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/src/Helpers.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/src/Helpers.cpp" > CMakeFiles/Algorithms.dir/src/Helpers.cpp.i

CMakeFiles/Algorithms.dir/src/Helpers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/src/Helpers.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/src/Helpers.cpp" -o CMakeFiles/Algorithms.dir/src/Helpers.cpp.s

# Object files for target Algorithms
Algorithms_OBJECTS = \
"CMakeFiles/Algorithms.dir/main.cpp.o" \
"CMakeFiles/Algorithms.dir/src/Helpers.cpp.o"

# External object files for target Algorithms
Algorithms_EXTERNAL_OBJECTS =

Algorithms: CMakeFiles/Algorithms.dir/main.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/src/Helpers.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/build.make
Algorithms: CMakeFiles/Algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Algorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Algorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Algorithms.dir/build: Algorithms

.PHONY : CMakeFiles/Algorithms.dir/build

CMakeFiles/Algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Algorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Algorithms.dir/clean

CMakeFiles/Algorithms.dir/depend:
	cd "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct" "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct" "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug" "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug" "/media/ahmad-lap/Career/SBME 4th/Algorithms/KaratsubaProduct/cmake-build-debug/CMakeFiles/Algorithms.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Algorithms.dir/depend
