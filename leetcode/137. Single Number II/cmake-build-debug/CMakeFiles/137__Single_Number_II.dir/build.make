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
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/137__Single_Number_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/137__Single_Number_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/137__Single_Number_II.dir/flags.make

CMakeFiles/137__Single_Number_II.dir/main.cpp.obj: CMakeFiles/137__Single_Number_II.dir/flags.make
CMakeFiles/137__Single_Number_II.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/137__Single_Number_II.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\137__Single_Number_II.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\main.cpp"

CMakeFiles/137__Single_Number_II.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/137__Single_Number_II.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\main.cpp" > CMakeFiles\137__Single_Number_II.dir\main.cpp.i

CMakeFiles/137__Single_Number_II.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/137__Single_Number_II.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\main.cpp" -o CMakeFiles\137__Single_Number_II.dir\main.cpp.s

CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.obj: CMakeFiles/137__Single_Number_II.dir/flags.make
CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.obj: ../singleNumber.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\137__Single_Number_II.dir\singleNumber.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\singleNumber.cpp"

CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\singleNumber.cpp" > CMakeFiles\137__Single_Number_II.dir\singleNumber.cpp.i

CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\singleNumber.cpp" -o CMakeFiles\137__Single_Number_II.dir\singleNumber.cpp.s

# Object files for target 137__Single_Number_II
137__Single_Number_II_OBJECTS = \
"CMakeFiles/137__Single_Number_II.dir/main.cpp.obj" \
"CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.obj"

# External object files for target 137__Single_Number_II
137__Single_Number_II_EXTERNAL_OBJECTS =

137__Single_Number_II.exe: CMakeFiles/137__Single_Number_II.dir/main.cpp.obj
137__Single_Number_II.exe: CMakeFiles/137__Single_Number_II.dir/singleNumber.cpp.obj
137__Single_Number_II.exe: CMakeFiles/137__Single_Number_II.dir/build.make
137__Single_Number_II.exe: CMakeFiles/137__Single_Number_II.dir/linklibs.rsp
137__Single_Number_II.exe: CMakeFiles/137__Single_Number_II.dir/objects1.rsp
137__Single_Number_II.exe: CMakeFiles/137__Single_Number_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 137__Single_Number_II.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\137__Single_Number_II.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/137__Single_Number_II.dir/build: 137__Single_Number_II.exe

.PHONY : CMakeFiles/137__Single_Number_II.dir/build

CMakeFiles/137__Single_Number_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\137__Single_Number_II.dir\cmake_clean.cmake
.PHONY : CMakeFiles/137__Single_Number_II.dir/clean

CMakeFiles/137__Single_Number_II.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II" "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II" "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\137. Single Number II\cmake-build-debug\CMakeFiles\137__Single_Number_II.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/137__Single_Number_II.dir/depend

