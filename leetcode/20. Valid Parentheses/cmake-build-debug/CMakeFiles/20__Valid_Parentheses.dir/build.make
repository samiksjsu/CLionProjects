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
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/20__Valid_Parentheses.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/20__Valid_Parentheses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/20__Valid_Parentheses.dir/flags.make

CMakeFiles/20__Valid_Parentheses.dir/main.cpp.obj: CMakeFiles/20__Valid_Parentheses.dir/flags.make
CMakeFiles/20__Valid_Parentheses.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/20__Valid_Parentheses.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\20__Valid_Parentheses.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\main.cpp"

CMakeFiles/20__Valid_Parentheses.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/20__Valid_Parentheses.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\main.cpp" > CMakeFiles\20__Valid_Parentheses.dir\main.cpp.i

CMakeFiles/20__Valid_Parentheses.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/20__Valid_Parentheses.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\main.cpp" -o CMakeFiles\20__Valid_Parentheses.dir\main.cpp.s

CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.obj: CMakeFiles/20__Valid_Parentheses.dir/flags.make
CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.obj: ../isValid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\20__Valid_Parentheses.dir\isValid.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\isValid.cpp"

CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\isValid.cpp" > CMakeFiles\20__Valid_Parentheses.dir\isValid.cpp.i

CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\isValid.cpp" -o CMakeFiles\20__Valid_Parentheses.dir\isValid.cpp.s

# Object files for target 20__Valid_Parentheses
20__Valid_Parentheses_OBJECTS = \
"CMakeFiles/20__Valid_Parentheses.dir/main.cpp.obj" \
"CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.obj"

# External object files for target 20__Valid_Parentheses
20__Valid_Parentheses_EXTERNAL_OBJECTS =

20__Valid_Parentheses.exe: CMakeFiles/20__Valid_Parentheses.dir/main.cpp.obj
20__Valid_Parentheses.exe: CMakeFiles/20__Valid_Parentheses.dir/isValid.cpp.obj
20__Valid_Parentheses.exe: CMakeFiles/20__Valid_Parentheses.dir/build.make
20__Valid_Parentheses.exe: CMakeFiles/20__Valid_Parentheses.dir/linklibs.rsp
20__Valid_Parentheses.exe: CMakeFiles/20__Valid_Parentheses.dir/objects1.rsp
20__Valid_Parentheses.exe: CMakeFiles/20__Valid_Parentheses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 20__Valid_Parentheses.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\20__Valid_Parentheses.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/20__Valid_Parentheses.dir/build: 20__Valid_Parentheses.exe

.PHONY : CMakeFiles/20__Valid_Parentheses.dir/build

CMakeFiles/20__Valid_Parentheses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\20__Valid_Parentheses.dir\cmake_clean.cmake
.PHONY : CMakeFiles/20__Valid_Parentheses.dir/clean

CMakeFiles/20__Valid_Parentheses.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses" "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses" "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\20. Valid Parentheses\cmake-build-debug\CMakeFiles\20__Valid_Parentheses.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/20__Valid_Parentheses.dir/depend

