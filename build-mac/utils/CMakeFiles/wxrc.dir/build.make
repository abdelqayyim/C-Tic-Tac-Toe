# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac"

# Include any dependencies generated for this target.
include utils/CMakeFiles/wxrc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include utils/CMakeFiles/wxrc.dir/compiler_depend.make

# Include the progress variables for this target.
include utils/CMakeFiles/wxrc.dir/progress.make

# Include the compile flags for this target's objects.
include utils/CMakeFiles/wxrc.dir/flags.make

utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o: utils/CMakeFiles/wxrc.dir/flags.make
utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o: /Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++\ Tic-Tac-Toe/wxWidgets/utils/wxrc/wxrc.cpp
utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o: utils/CMakeFiles/wxrc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o -MF CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o.d -o CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o -c "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/utils/wxrc/wxrc.cpp"

utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.i"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/utils/wxrc/wxrc.cpp" > CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.i

utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.s"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/utils/wxrc/wxrc.cpp" -o CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.s

# Object files for target wxrc
wxrc_OBJECTS = \
"CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o"

# External object files for target wxrc
wxrc_EXTERNAL_OBJECTS =

lib/wxrc-3.3: utils/CMakeFiles/wxrc.dir/__/__/__/utils/wxrc/wxrc.cpp.o
lib/wxrc-3.3: utils/CMakeFiles/wxrc.dir/build.make
lib/wxrc-3.3: lib/libwx_baseu_xml-3.3.0.0.0.dylib
lib/wxrc-3.3: lib/libwx_baseu-3.3.0.0.0.dylib
lib/wxrc-3.3: utils/CMakeFiles/wxrc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../lib/wxrc-3.3"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wxrc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/CMakeFiles/wxrc.dir/build: lib/wxrc-3.3
.PHONY : utils/CMakeFiles/wxrc.dir/build

utils/CMakeFiles/wxrc.dir/clean:
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils" && $(CMAKE_COMMAND) -P CMakeFiles/wxrc.dir/cmake_clean.cmake
.PHONY : utils/CMakeFiles/wxrc.dir/clean

utils/CMakeFiles/wxrc.dir/depend:
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build/cmake/utils" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/utils/CMakeFiles/wxrc.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : utils/CMakeFiles/wxrc.dir/depend

