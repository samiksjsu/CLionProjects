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
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Amazon.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Amazon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Amazon.dir/flags.make

CMakeFiles/Amazon.dir/main.cpp.obj: CMakeFiles/Amazon.dir/flags.make
CMakeFiles/Amazon.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Amazon.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Amazon.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\main.cpp"

CMakeFiles/Amazon.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Amazon.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\main.cpp" > CMakeFiles\Amazon.dir\main.cpp.i

CMakeFiles/Amazon.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Amazon.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\main.cpp" -o CMakeFiles\Amazon.dir\main.cpp.s

CMakeFiles/Amazon.dir/kNearestPoints.cpp.obj: CMakeFiles/Amazon.dir/flags.make
CMakeFiles/Amazon.dir/kNearestPoints.cpp.obj: ../kNearestPoints.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Amazon.dir/kNearestPoints.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Amazon.dir\kNearestPoints.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\kNearestPoints.cpp"

CMakeFiles/Amazon.dir/kNearestPoints.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Amazon.dir/kNearestPoints.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\kNearestPoints.cpp" > CMakeFiles\Amazon.dir\kNearestPoints.cpp.i

CMakeFiles/Amazon.dir/kNearestPoints.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Amazon.dir/kNearestPoints.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\kNearestPoints.cpp" -o CMakeFiles\Amazon.dir\kNearestPoints.cpp.s

# Object files for target Amazon
Amazon_OBJECTS = \
"CMakeFiles/Amazon.dir/main.cpp.obj" \
"CMakeFiles/Amazon.dir/kNearestPoints.cpp.obj"

# External object files for target Amazon
Amazon_EXTERNAL_OBJECTS =

Amazon.exe: CMakeFiles/Amazon.dir/main.cpp.obj
Amazon.exe: CMakeFiles/Amazon.dir/kNearestPoints.cpp.obj
Amazon.exe: CMakeFiles/Amazon.dir/build.make
Amazon.exe: CMakeFiles/Amazon.dir/linklibs.rsp
Amazon.exe: CMakeFiles/Amazon.dir/objects1.rsp
Amazon.exe: CMakeFiles/Amazon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Amazon.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Amazon.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Amazon.dir/build: Amazon.exe

.PHONY : CMakeFiles/Amazon.dir/build

CMakeFiles/Amazon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Amazon.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Amazon.dir/clean

CMakeFiles/Amazon.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon" "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon" "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\Amazon\cmake-build-debug\CMakeFiles\Amazon.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Amazon.dir/depend
