# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /snap/clion/61/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/61/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/operatorOverriding.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/operatorOverriding.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/operatorOverriding.dir/flags.make

CMakeFiles/operatorOverriding.dir/main.cpp.o: CMakeFiles/operatorOverriding.dir/flags.make
CMakeFiles/operatorOverriding.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/operatorOverriding.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/operatorOverriding.dir/main.cpp.o -c /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/main.cpp

CMakeFiles/operatorOverriding.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/operatorOverriding.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/main.cpp > CMakeFiles/operatorOverriding.dir/main.cpp.i

CMakeFiles/operatorOverriding.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/operatorOverriding.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/main.cpp -o CMakeFiles/operatorOverriding.dir/main.cpp.s

# Object files for target operatorOverriding
operatorOverriding_OBJECTS = \
"CMakeFiles/operatorOverriding.dir/main.cpp.o"

# External object files for target operatorOverriding
operatorOverriding_EXTERNAL_OBJECTS =

operatorOverriding: CMakeFiles/operatorOverriding.dir/main.cpp.o
operatorOverriding: CMakeFiles/operatorOverriding.dir/build.make
operatorOverriding: CMakeFiles/operatorOverriding.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable operatorOverriding"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operatorOverriding.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/operatorOverriding.dir/build: operatorOverriding

.PHONY : CMakeFiles/operatorOverriding.dir/build

CMakeFiles/operatorOverriding.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/operatorOverriding.dir/cmake_clean.cmake
.PHONY : CMakeFiles/operatorOverriding.dir/clean

CMakeFiles/operatorOverriding.dir/depend:
	cd /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug /home/eyan422/Downloads/C-program-design/C++/Lesson4/operatorOverriding/cmake-build-debug/CMakeFiles/operatorOverriding.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/operatorOverriding.dir/depend

