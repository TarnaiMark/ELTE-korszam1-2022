# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/ELTE-korszam1-2022/Korszam1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/ELTE-korszam1-2022/build

# Include any dependencies generated for this target.
include CMakeFiles/Korszam1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Korszam1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Korszam1.dir/flags.make

CMakeFiles/Korszam1.dir/Korszam1.cpp.o: CMakeFiles/Korszam1.dir/flags.make
CMakeFiles/Korszam1.dir/Korszam1.cpp.o: /workspaces/ELTE-korszam1-2022/Korszam1/Korszam1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/ELTE-korszam1-2022/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Korszam1.dir/Korszam1.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Korszam1.dir/Korszam1.cpp.o -c /workspaces/ELTE-korszam1-2022/Korszam1/Korszam1.cpp

CMakeFiles/Korszam1.dir/Korszam1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Korszam1.dir/Korszam1.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/ELTE-korszam1-2022/Korszam1/Korszam1.cpp > CMakeFiles/Korszam1.dir/Korszam1.cpp.i

CMakeFiles/Korszam1.dir/Korszam1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Korszam1.dir/Korszam1.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/ELTE-korszam1-2022/Korszam1/Korszam1.cpp -o CMakeFiles/Korszam1.dir/Korszam1.cpp.s

# Object files for target Korszam1
Korszam1_OBJECTS = \
"CMakeFiles/Korszam1.dir/Korszam1.cpp.o"

# External object files for target Korszam1
Korszam1_EXTERNAL_OBJECTS =

Korszam1: CMakeFiles/Korszam1.dir/Korszam1.cpp.o
Korszam1: CMakeFiles/Korszam1.dir/build.make
Korszam1: CMakeFiles/Korszam1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/ELTE-korszam1-2022/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Korszam1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Korszam1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Korszam1.dir/build: Korszam1

.PHONY : CMakeFiles/Korszam1.dir/build

CMakeFiles/Korszam1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Korszam1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Korszam1.dir/clean

CMakeFiles/Korszam1.dir/depend:
	cd /workspaces/ELTE-korszam1-2022/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/ELTE-korszam1-2022/Korszam1 /workspaces/ELTE-korszam1-2022/Korszam1 /workspaces/ELTE-korszam1-2022/build /workspaces/ELTE-korszam1-2022/build /workspaces/ELTE-korszam1-2022/build/CMakeFiles/Korszam1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Korszam1.dir/depend

