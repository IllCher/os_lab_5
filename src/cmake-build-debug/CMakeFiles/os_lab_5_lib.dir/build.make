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
CMAKE_SOURCE_DIR = /mnt/d/Study/Labs2course/os_lab_5/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/os_lab_5_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/os_lab_5_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/os_lab_5_lib.dir/flags.make

CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o: CMakeFiles/os_lab_5_lib.dir/flags.make
CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o: ../lib/vecmd5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o   -c /mnt/d/Study/Labs2course/os_lab_5/src/lib/vecmd5.c

CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/d/Study/Labs2course/os_lab_5/src/lib/vecmd5.c > CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.i

CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/d/Study/Labs2course/os_lab_5/src/lib/vecmd5.c -o CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.s

CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.requires:

.PHONY : CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.requires

CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.provides: CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.requires
	$(MAKE) -f CMakeFiles/os_lab_5_lib.dir/build.make CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.provides.build
.PHONY : CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.provides

CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.provides.build: CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o


# Object files for target os_lab_5_lib
os_lab_5_lib_OBJECTS = \
"CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o"

# External object files for target os_lab_5_lib
os_lab_5_lib_EXTERNAL_OBJECTS =

libos_lab_5_lib.so: CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o
libos_lab_5_lib.so: CMakeFiles/os_lab_5_lib.dir/build.make
libos_lab_5_lib.so: CMakeFiles/os_lab_5_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library libos_lab_5_lib.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/os_lab_5_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/os_lab_5_lib.dir/build: libos_lab_5_lib.so

.PHONY : CMakeFiles/os_lab_5_lib.dir/build

CMakeFiles/os_lab_5_lib.dir/requires: CMakeFiles/os_lab_5_lib.dir/lib/vecmd5.c.o.requires

.PHONY : CMakeFiles/os_lab_5_lib.dir/requires

CMakeFiles/os_lab_5_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/os_lab_5_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/os_lab_5_lib.dir/clean

CMakeFiles/os_lab_5_lib.dir/depend:
	cd /mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Study/Labs2course/os_lab_5/src /mnt/d/Study/Labs2course/os_lab_5/src /mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug /mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug /mnt/d/Study/Labs2course/os_lab_5/src/cmake-build-debug/CMakeFiles/os_lab_5_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/os_lab_5_lib.dir/depend

