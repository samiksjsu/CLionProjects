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
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/155__minStack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/155__minStack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/155__minStack.dir/flags.make

CMakeFiles/155__minStack.dir/main.cpp.obj: CMakeFiles/155__minStack.dir/flags.make
CMakeFiles/155__minStack.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/155__minStack.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\155__minStack.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\main.cpp"

CMakeFiles/155__minStack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/155__minStack.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\main.cpp" > CMakeFiles\155__minStack.dir\main.cpp.i

CMakeFiles/155__minStack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/155__minStack.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\main.cpp" -o CMakeFiles\155__minStack.dir\main.cpp.s

CMakeFiles/155__minStack.dir/minStack.cpp.obj: CMakeFiles/155__minStack.dir/flags.make
CMakeFiles/155__minStack.dir/minStack.cpp.obj: ../minStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/155__minStack.dir/minStack.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\155__minStack.dir\minStack.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\minStack.cpp"

CMakeFiles/155__minStack.dir/minStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/155__minStack.dir/minStack.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\minStack.cpp" > CMakeFiles\155__minStack.dir\minStack.cpp.i

CMakeFiles/155__minStack.dir/minStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/155__minStack.dir/minStack.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\minStack.cpp" -o CMakeFiles\155__minStack.dir\minStack.cpp.s

# Object files for target 155__minStack
155__minStack_OBJECTS = \
"CMakeFiles/155__minStack.dir/main.cpp.obj" \
"CMakeFiles/155__minStack.dir/minStack.cpp.obj"

# External object files for target 155__minStack
155__minStack_EXTERNAL_OBJECTS =

155__minStack.exe: CMakeFiles/155__minStack.dir/main.cpp.obj
155__minStack.exe: CMakeFiles/155__minStack.dir/minStack.cpp.obj
155__minStack.exe: CMakeFiles/155__minStack.dir/build.make
155__minStack.exe: CMakeFiles/155__minStack.dir/linklibs.rsp
155__minStack.exe: CMakeFiles/155__minStack.dir/objects1.rsp
155__minStack.exe: CMakeFiles/155__minStack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 155__minStack.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\155__minStack.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/155__minStack.dir/build: 155__minStack.exe

.PHONY : CMakeFiles/155__minStack.dir/build

CMakeFiles/155__minStack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\155__minStack.dir\cmake_clean.cmake
.PHONY : CMakeFiles/155__minStack.dir/clean

CMakeFiles/155__minStack.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack" "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack" "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\155. minStack\cmake-build-debug\CMakeFiles\155__minStack.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/155__minStack.dir/depend
