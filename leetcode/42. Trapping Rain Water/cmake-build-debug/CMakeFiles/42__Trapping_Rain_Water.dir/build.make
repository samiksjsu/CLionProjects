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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/42__Trapping_Rain_Water.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/42__Trapping_Rain_Water.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/42__Trapping_Rain_Water.dir/flags.make

CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.obj: CMakeFiles/42__Trapping_Rain_Water.dir/flags.make
CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\42__Trapping_Rain_Water.dir\main.cpp.obj -c "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\main.cpp"

CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\main.cpp" > CMakeFiles\42__Trapping_Rain_Water.dir\main.cpp.i

CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\main.cpp" -o CMakeFiles\42__Trapping_Rain_Water.dir\main.cpp.s

# Object files for target 42__Trapping_Rain_Water
42__Trapping_Rain_Water_OBJECTS = \
"CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.obj"

# External object files for target 42__Trapping_Rain_Water
42__Trapping_Rain_Water_EXTERNAL_OBJECTS =

42__Trapping_Rain_Water.exe: CMakeFiles/42__Trapping_Rain_Water.dir/main.cpp.obj
42__Trapping_Rain_Water.exe: CMakeFiles/42__Trapping_Rain_Water.dir/build.make
42__Trapping_Rain_Water.exe: CMakeFiles/42__Trapping_Rain_Water.dir/linklibs.rsp
42__Trapping_Rain_Water.exe: CMakeFiles/42__Trapping_Rain_Water.dir/objects1.rsp
42__Trapping_Rain_Water.exe: CMakeFiles/42__Trapping_Rain_Water.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 42__Trapping_Rain_Water.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\42__Trapping_Rain_Water.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/42__Trapping_Rain_Water.dir/build: 42__Trapping_Rain_Water.exe

.PHONY : CMakeFiles/42__Trapping_Rain_Water.dir/build

CMakeFiles/42__Trapping_Rain_Water.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\42__Trapping_Rain_Water.dir\cmake_clean.cmake
.PHONY : CMakeFiles/42__Trapping_Rain_Water.dir/clean

CMakeFiles/42__Trapping_Rain_Water.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water" "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water" "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\cmake-build-debug" "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\cmake-build-debug" "C:\Users\samik\CLionProjects\leetcode\42. Trapping Rain Water\cmake-build-debug\CMakeFiles\42__Trapping_Rain_Water.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/42__Trapping_Rain_Water.dir/depend

