# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/os_lab_5.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/os_lab_5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/os_lab_5.dir/flags.make

CMakeFiles/os_lab_5.dir/test2.c.o: CMakeFiles/os_lab_5.dir/flags.make
CMakeFiles/os_lab_5.dir/test2.c.o: ../test2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/os_lab_5.dir/test2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/os_lab_5.dir/test2.c.o   -c /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/test2.c

CMakeFiles/os_lab_5.dir/test2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_lab_5.dir/test2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/test2.c > CMakeFiles/os_lab_5.dir/test2.c.i

CMakeFiles/os_lab_5.dir/test2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_lab_5.dir/test2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/test2.c -o CMakeFiles/os_lab_5.dir/test2.c.s

CMakeFiles/os_lab_5.dir/test2.c.o.requires:

.PHONY : CMakeFiles/os_lab_5.dir/test2.c.o.requires

CMakeFiles/os_lab_5.dir/test2.c.o.provides: CMakeFiles/os_lab_5.dir/test2.c.o.requires
	$(MAKE) -f CMakeFiles/os_lab_5.dir/build.make CMakeFiles/os_lab_5.dir/test2.c.o.provides.build
.PHONY : CMakeFiles/os_lab_5.dir/test2.c.o.provides

CMakeFiles/os_lab_5.dir/test2.c.o.provides.build: CMakeFiles/os_lab_5.dir/test2.c.o


# Object files for target os_lab_5
os_lab_5_OBJECTS = \
"CMakeFiles/os_lab_5.dir/test2.c.o"

# External object files for target os_lab_5
os_lab_5_EXTERNAL_OBJECTS =

os_lab_5: CMakeFiles/os_lab_5.dir/test2.c.o
os_lab_5: CMakeFiles/os_lab_5.dir/build.make
os_lab_5: libos_lab_5_lib.so
os_lab_5: CMakeFiles/os_lab_5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable os_lab_5"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/os_lab_5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/os_lab_5.dir/build: os_lab_5

.PHONY : CMakeFiles/os_lab_5.dir/build

CMakeFiles/os_lab_5.dir/requires: CMakeFiles/os_lab_5.dir/test2.c.o.requires

.PHONY : CMakeFiles/os_lab_5.dir/requires

CMakeFiles/os_lab_5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/os_lab_5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/os_lab_5.dir/clean

CMakeFiles/os_lab_5.dir/depend:
	cd /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug /mnt/c/Users/Ilya/Desktop/Labs2course/os_lab_5/src/cmake-build-debug/CMakeFiles/os_lab_5.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/os_lab_5.dir/depend

