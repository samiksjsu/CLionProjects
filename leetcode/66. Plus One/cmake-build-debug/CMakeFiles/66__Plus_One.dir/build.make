# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/66__Plus_One.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/66__Plus_One.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/66__Plus_One.dir/flags.make

CMakeFiles/66__Plus_One.dir/main.cpp.obj: CMakeFiles/66__Plus_One.dir/flags.make
CMakeFiles/66__Plus_One.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/66__Plus_One.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\66__Plus_One.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\main.cpp"

CMakeFiles/66__Plus_One.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/66__Plus_One.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\main.cpp" > CMakeFiles\66__Plus_One.dir\main.cpp.i

CMakeFiles/66__Plus_One.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/66__Plus_One.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\main.cpp" -o CMakeFiles\66__Plus_One.dir\main.cpp.s

CMakeFiles/66__Plus_One.dir/plusOne.cpp.obj: CMakeFiles/66__Plus_One.dir/flags.make
CMakeFiles/66__Plus_One.dir/plusOne.cpp.obj: ../plusOne.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/66__Plus_One.dir/plusOne.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\66__Plus_One.dir\plusOne.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\plusOne.cpp"

CMakeFiles/66__Plus_One.dir/plusOne.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/66__Plus_One.dir/plusOne.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\plusOne.cpp" > CMakeFiles\66__Plus_One.dir\plusOne.cpp.i

CMakeFiles/66__Plus_One.dir/plusOne.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/66__Plus_One.dir/plusOne.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\plusOne.cpp" -o CMakeFiles\66__Plus_One.dir\plusOne.cpp.s

# Object files for target 66__Plus_One
66__Plus_One_OBJECTS = \
"CMakeFiles/66__Plus_One.dir/main.cpp.obj" \
"CMakeFiles/66__Plus_One.dir/plusOne.cpp.obj"

# External object files for target 66__Plus_One
66__Plus_One_EXTERNAL_OBJECTS =

66__Plus_One.exe: CMakeFiles/66__Plus_One.dir/main.cpp.obj
66__Plus_One.exe: CMakeFiles/66__Plus_One.dir/plusOne.cpp.obj
66__Plus_One.exe: CMakeFiles/66__Plus_One.dir/build.make
66__Plus_One.exe: CMakeFiles/66__Plus_One.dir/linklibs.rsp
66__Plus_One.exe: CMakeFiles/66__Plus_One.dir/objects1.rsp
66__Plus_One.exe: CMakeFiles/66__Plus_One.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 66__Plus_One.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\66__Plus_One.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/66__Plus_One.dir/build: 66__Plus_One.exe

.PHONY : CMakeFiles/66__Plus_One.dir/build

CMakeFiles/66__Plus_One.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\66__Plus_One.dir\cmake_clean.cmake
.PHONY : CMakeFiles/66__Plus_One.dir/clean

CMakeFiles/66__Plus_One.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One" "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One" "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\66. Plus One\cmake-build-debug\CMakeFiles\66__Plus_One.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/66__Plus_One.dir/depend

