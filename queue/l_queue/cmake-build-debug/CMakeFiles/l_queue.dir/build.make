# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\georg\Desktop\Template Structures\queue\l_queue"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/l_queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/l_queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/l_queue.dir/flags.make

CMakeFiles/l_queue.dir/l_queue.cpp.obj: CMakeFiles/l_queue.dir/flags.make
CMakeFiles/l_queue.dir/l_queue.cpp.obj: ../l_queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/l_queue.dir/l_queue.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\l_queue.dir\l_queue.cpp.obj -c "C:\Users\georg\Desktop\Template Structures\queue\l_queue\l_queue.cpp"

CMakeFiles/l_queue.dir/l_queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l_queue.dir/l_queue.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\Template Structures\queue\l_queue\l_queue.cpp" > CMakeFiles\l_queue.dir\l_queue.cpp.i

CMakeFiles/l_queue.dir/l_queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l_queue.dir/l_queue.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\Template Structures\queue\l_queue\l_queue.cpp" -o CMakeFiles\l_queue.dir\l_queue.cpp.s

CMakeFiles/l_queue.dir/l_queue.cpp.obj.requires:

.PHONY : CMakeFiles/l_queue.dir/l_queue.cpp.obj.requires

CMakeFiles/l_queue.dir/l_queue.cpp.obj.provides: CMakeFiles/l_queue.dir/l_queue.cpp.obj.requires
	$(MAKE) -f CMakeFiles\l_queue.dir\build.make CMakeFiles/l_queue.dir/l_queue.cpp.obj.provides.build
.PHONY : CMakeFiles/l_queue.dir/l_queue.cpp.obj.provides

CMakeFiles/l_queue.dir/l_queue.cpp.obj.provides.build: CMakeFiles/l_queue.dir/l_queue.cpp.obj


CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj: CMakeFiles/l_queue.dir/flags.make
CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj: ../l_queue_test/l_queue_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\l_queue.dir\l_queue_test\l_queue_test.cpp.obj -c "C:\Users\georg\Desktop\Template Structures\queue\l_queue\l_queue_test\l_queue_test.cpp"

CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\georg\Desktop\Template Structures\queue\l_queue\l_queue_test\l_queue_test.cpp" > CMakeFiles\l_queue.dir\l_queue_test\l_queue_test.cpp.i

CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\georg\Desktop\Template Structures\queue\l_queue\l_queue_test\l_queue_test.cpp" -o CMakeFiles\l_queue.dir\l_queue_test\l_queue_test.cpp.s

CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.requires:

.PHONY : CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.requires

CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.provides: CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.requires
	$(MAKE) -f CMakeFiles\l_queue.dir\build.make CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.provides.build
.PHONY : CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.provides

CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.provides.build: CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj


# Object files for target l_queue
l_queue_OBJECTS = \
"CMakeFiles/l_queue.dir/l_queue.cpp.obj" \
"CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj"

# External object files for target l_queue
l_queue_EXTERNAL_OBJECTS =

l_queue.exe: CMakeFiles/l_queue.dir/l_queue.cpp.obj
l_queue.exe: CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj
l_queue.exe: CMakeFiles/l_queue.dir/build.make
l_queue.exe: CMakeFiles/l_queue.dir/linklibs.rsp
l_queue.exe: CMakeFiles/l_queue.dir/objects1.rsp
l_queue.exe: CMakeFiles/l_queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable l_queue.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\l_queue.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/l_queue.dir/build: l_queue.exe

.PHONY : CMakeFiles/l_queue.dir/build

CMakeFiles/l_queue.dir/requires: CMakeFiles/l_queue.dir/l_queue.cpp.obj.requires
CMakeFiles/l_queue.dir/requires: CMakeFiles/l_queue.dir/l_queue_test/l_queue_test.cpp.obj.requires

.PHONY : CMakeFiles/l_queue.dir/requires

CMakeFiles/l_queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\l_queue.dir\cmake_clean.cmake
.PHONY : CMakeFiles/l_queue.dir/clean

CMakeFiles/l_queue.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\georg\Desktop\Template Structures\queue\l_queue" "C:\Users\georg\Desktop\Template Structures\queue\l_queue" "C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug" "C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug" "C:\Users\georg\Desktop\Template Structures\queue\l_queue\cmake-build-debug\CMakeFiles\l_queue.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/l_queue.dir/depend
