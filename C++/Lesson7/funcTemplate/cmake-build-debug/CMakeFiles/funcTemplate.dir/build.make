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
CMAKE_SOURCE_DIR = /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/funcTemplate.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/funcTemplate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/funcTemplate.dir/flags.make

CMakeFiles/funcTemplate.dir/main.cpp.o: CMakeFiles/funcTemplate.dir/flags.make
CMakeFiles/funcTemplate.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/funcTemplate.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/funcTemplate.dir/main.cpp.o -c /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/main.cpp

CMakeFiles/funcTemplate.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/funcTemplate.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/main.cpp > CMakeFiles/funcTemplate.dir/main.cpp.i

CMakeFiles/funcTemplate.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/funcTemplate.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/main.cpp -o CMakeFiles/funcTemplate.dir/main.cpp.s

# Object files for target funcTemplate
funcTemplate_OBJECTS = \
"CMakeFiles/funcTemplate.dir/main.cpp.o"

# External object files for target funcTemplate
funcTemplate_EXTERNAL_OBJECTS =

funcTemplate: CMakeFiles/funcTemplate.dir/main.cpp.o
funcTemplate: CMakeFiles/funcTemplate.dir/build.make
funcTemplate: CMakeFiles/funcTemplate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable funcTemplate"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/funcTemplate.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/funcTemplate.dir/build: funcTemplate

.PHONY : CMakeFiles/funcTemplate.dir/build

CMakeFiles/funcTemplate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/funcTemplate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/funcTemplate.dir/clean

CMakeFiles/funcTemplate.dir/depend:
	cd /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug /home/eyan422/Downloads/C-program-design/C++/Lesson7/funcTemplate/cmake-build-debug/CMakeFiles/funcTemplate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/funcTemplate.dir/depend
