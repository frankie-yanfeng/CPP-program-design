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
CMAKE_SOURCE_DIR = /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/vecor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vecor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vecor.dir/flags.make

CMakeFiles/vecor.dir/main.cpp.o: CMakeFiles/vecor.dir/flags.make
CMakeFiles/vecor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vecor.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vecor.dir/main.cpp.o -c /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/main.cpp

CMakeFiles/vecor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vecor.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/main.cpp > CMakeFiles/vecor.dir/main.cpp.i

CMakeFiles/vecor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vecor.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/main.cpp -o CMakeFiles/vecor.dir/main.cpp.s

# Object files for target vecor
vecor_OBJECTS = \
"CMakeFiles/vecor.dir/main.cpp.o"

# External object files for target vecor
vecor_EXTERNAL_OBJECTS =

vecor: CMakeFiles/vecor.dir/main.cpp.o
vecor: CMakeFiles/vecor.dir/build.make
vecor: CMakeFiles/vecor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vecor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vecor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vecor.dir/build: vecor

.PHONY : CMakeFiles/vecor.dir/build

CMakeFiles/vecor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vecor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vecor.dir/clean

CMakeFiles/vecor.dir/depend:
	cd /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug /home/eyan422/Downloads/C-program-design/C++/Lesson8/vecor/cmake-build-debug/CMakeFiles/vecor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vecor.dir/depend

