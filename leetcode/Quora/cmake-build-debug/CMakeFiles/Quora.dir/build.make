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
CMAKE_SOURCE_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Quora.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Quora.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Quora.dir/flags.make

CMakeFiles/Quora.dir/main.cpp.obj: CMakeFiles/Quora.dir/flags.make
CMakeFiles/Quora.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Quora.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Quora.dir\main.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\main.cpp"

CMakeFiles/Quora.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Quora.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\main.cpp" > CMakeFiles\Quora.dir\main.cpp.i

CMakeFiles/Quora.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Quora.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\main.cpp" -o CMakeFiles\Quora.dir\main.cpp.s

CMakeFiles/Quora.dir/evenDigits.cpp.obj: CMakeFiles/Quora.dir/flags.make
CMakeFiles/Quora.dir/evenDigits.cpp.obj: ../evenDigits.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Quora.dir/evenDigits.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Quora.dir\evenDigits.cpp.obj -c "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\evenDigits.cpp"

CMakeFiles/Quora.dir/evenDigits.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Quora.dir/evenDigits.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\evenDigits.cpp" > CMakeFiles\Quora.dir\evenDigits.cpp.i

CMakeFiles/Quora.dir/evenDigits.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Quora.dir/evenDigits.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\evenDigits.cpp" -o CMakeFiles\Quora.dir\evenDigits.cpp.s

# Object files for target Quora
Quora_OBJECTS = \
"CMakeFiles/Quora.dir/main.cpp.obj" \
"CMakeFiles/Quora.dir/evenDigits.cpp.obj"

# External object files for target Quora
Quora_EXTERNAL_OBJECTS =

Quora.exe: CMakeFiles/Quora.dir/main.cpp.obj
Quora.exe: CMakeFiles/Quora.dir/evenDigits.cpp.obj
Quora.exe: CMakeFiles/Quora.dir/build.make
Quora.exe: CMakeFiles/Quora.dir/linklibs.rsp
Quora.exe: CMakeFiles/Quora.dir/objects1.rsp
Quora.exe: CMakeFiles/Quora.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Quora.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Quora.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Quora.dir/build: Quora.exe

.PHONY : CMakeFiles/Quora.dir/build

CMakeFiles/Quora.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Quora.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Quora.dir/clean

CMakeFiles/Quora.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora" "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora" "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug" "C:\Users\Samik Biswas\CLionProjects\leetcode\Quora\cmake-build-debug\CMakeFiles\Quora.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Quora.dir/depend

