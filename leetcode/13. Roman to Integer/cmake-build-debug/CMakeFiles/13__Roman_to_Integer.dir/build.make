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
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/13__Roman_to_Integer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/13__Roman_to_Integer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/13__Roman_to_Integer.dir/flags.make

CMakeFiles/13__Roman_to_Integer.dir/main.cpp.obj: CMakeFiles/13__Roman_to_Integer.dir/flags.make
CMakeFiles/13__Roman_to_Integer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/13__Roman_to_Integer.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\13__Roman_to_Integer.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\main.cpp"

CMakeFiles/13__Roman_to_Integer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/13__Roman_to_Integer.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\main.cpp" > CMakeFiles\13__Roman_to_Integer.dir\main.cpp.i

CMakeFiles/13__Roman_to_Integer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/13__Roman_to_Integer.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\main.cpp" -o CMakeFiles\13__Roman_to_Integer.dir\main.cpp.s

CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.obj: CMakeFiles/13__Roman_to_Integer.dir/flags.make
CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.obj: ../romanToInt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\13__Roman_to_Integer.dir\romanToInt.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\romanToInt.cpp"

CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\romanToInt.cpp" > CMakeFiles\13__Roman_to_Integer.dir\romanToInt.cpp.i

CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\romanToInt.cpp" -o CMakeFiles\13__Roman_to_Integer.dir\romanToInt.cpp.s

# Object files for target 13__Roman_to_Integer
13__Roman_to_Integer_OBJECTS = \
"CMakeFiles/13__Roman_to_Integer.dir/main.cpp.obj" \
"CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.obj"

# External object files for target 13__Roman_to_Integer
13__Roman_to_Integer_EXTERNAL_OBJECTS =

13__Roman_to_Integer.exe: CMakeFiles/13__Roman_to_Integer.dir/main.cpp.obj
13__Roman_to_Integer.exe: CMakeFiles/13__Roman_to_Integer.dir/romanToInt.cpp.obj
13__Roman_to_Integer.exe: CMakeFiles/13__Roman_to_Integer.dir/build.make
13__Roman_to_Integer.exe: CMakeFiles/13__Roman_to_Integer.dir/linklibs.rsp
13__Roman_to_Integer.exe: CMakeFiles/13__Roman_to_Integer.dir/objects1.rsp
13__Roman_to_Integer.exe: CMakeFiles/13__Roman_to_Integer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 13__Roman_to_Integer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\13__Roman_to_Integer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/13__Roman_to_Integer.dir/build: 13__Roman_to_Integer.exe

.PHONY : CMakeFiles/13__Roman_to_Integer.dir/build

CMakeFiles/13__Roman_to_Integer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\13__Roman_to_Integer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/13__Roman_to_Integer.dir/clean

CMakeFiles/13__Roman_to_Integer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer" "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer" "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\13. Roman to Integer\cmake-build-debug\CMakeFiles\13__Roman_to_Integer.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/13__Roman_to_Integer.dir/depend

