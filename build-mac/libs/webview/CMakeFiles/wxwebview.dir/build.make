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
include libs/webview/CMakeFiles/wxwebview.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/webview/CMakeFiles/wxwebview.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/webview/CMakeFiles/wxwebview.dir/progress.make

# Include the compile flags for this target's objects.
include libs/webview/CMakeFiles/wxwebview.dir/flags.make

libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch: libs/webview/CMakeFiles/wxwebview.dir/flags.make
libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.cxx
libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx
libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch: libs/webview/CMakeFiles/wxwebview.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGSx86_64) -Winvalid-pch -Xclang -emit-pch -Xclang -include -Xclang "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -x c++-header -MD -MT libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch -MF CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch.d -o CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch -c "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.cxx"

libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.i"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGSx86_64) -Winvalid-pch -Xclang -emit-pch -Xclang -include -Xclang "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -x c++-header -E "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.cxx" > CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.i

libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.s"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGSx86_64) -Winvalid-pch -Xclang -emit-pch -Xclang -include -Xclang "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -x c++-header -S "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.cxx" -o CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.s

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/flags.make
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o: /Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++\ Tic-Tac-Toe/wxWidgets/src/common/webview.cpp
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -MD -MT libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o -MF CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o.d -o CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o -c "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webview.cpp"

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.i"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -E "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webview.cpp" > CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.i

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.s"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -S "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webview.cpp" -o CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.s

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/flags.make
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o: /Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++\ Tic-Tac-Toe/wxWidgets/src/common/webviewarchivehandler.cpp
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -MD -MT libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o -MF CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o.d -o CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o -c "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webviewarchivehandler.cpp"

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.i"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -E "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webviewarchivehandler.cpp" > CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.i

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.s"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -S "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webviewarchivehandler.cpp" -o CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.s

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/flags.make
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o: /Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++\ Tic-Tac-Toe/wxWidgets/src/common/webviewfshandler.cpp
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o: libs/webview/CMakeFiles/wxwebview.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -MD -MT libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o -MF CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o.d -o CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o -c "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webviewfshandler.cpp"

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.i"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -E "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webviewfshandler.cpp" > CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.i

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.s"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -Winvalid-pch -Xarch_x86_64 "-include/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx" -S "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/common/webviewfshandler.cpp" -o CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.s

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o: libs/webview/CMakeFiles/wxwebview.dir/flags.make
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o: /Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++\ Tic-Tac-Toe/wxWidgets/src/osx/webview_webkit.mm
libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o: libs/webview/CMakeFiles/wxwebview.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building OBJCXX object libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(OBJCXX_DEFINES) $(OBJCXX_INCLUDES) -x objective-c++ $(OBJCXX_FLAGS) -MD -MT libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o -MF CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o.d -o CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o -c "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/osx/webview_webkit.mm"

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing OBJCXX source to CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.i"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(OBJCXX_DEFINES) $(OBJCXX_INCLUDES) $(OBJCXX_FLAGS) -E "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/osx/webview_webkit.mm" > CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.i

libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling OBJCXX source to assembly CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.s"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && /Library/Developer/CommandLineTools/usr/bin/c++ $(OBJCXX_DEFINES) $(OBJCXX_INCLUDES) $(OBJCXX_FLAGS) -S "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/src/osx/webview_webkit.mm" -o CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.s

# Object files for target wxwebview
wxwebview_OBJECTS = \
"CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o" \
"CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o" \
"CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o" \
"CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o"

# External object files for target wxwebview
wxwebview_EXTERNAL_OBJECTS =

lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/cmake_pch_x86_64.hxx.pch
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webview.cpp.o
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewarchivehandler.cpp.o
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/common/webviewfshandler.cpp.o
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/__/__/__/__/src/osx/webview_webkit.mm.o
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/build.make
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: lib/libwx_osx_cocoau_core-3.3.0.0.0.dylib
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: lib/libwx_baseu-3.3.0.0.0.dylib
lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib: libs/webview/CMakeFiles/wxwebview.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library ../../lib/libwx_osx_cocoau_webview-3.3.dylib"
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wxwebview.dir/link.txt --verbose=$(VERBOSE)
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib ../../lib/libwx_osx_cocoau_webview-3.3.0.dylib ../../lib/libwx_osx_cocoau_webview-3.3.dylib

lib/libwx_osx_cocoau_webview-3.3.0.dylib: lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libwx_osx_cocoau_webview-3.3.0.dylib

lib/libwx_osx_cocoau_webview-3.3.dylib: lib/libwx_osx_cocoau_webview-3.3.0.0.0.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libwx_osx_cocoau_webview-3.3.dylib

# Rule to build all files generated by this target.
libs/webview/CMakeFiles/wxwebview.dir/build: lib/libwx_osx_cocoau_webview-3.3.dylib
.PHONY : libs/webview/CMakeFiles/wxwebview.dir/build

libs/webview/CMakeFiles/wxwebview.dir/clean:
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" && $(CMAKE_COMMAND) -P CMakeFiles/wxwebview.dir/cmake_clean.cmake
.PHONY : libs/webview/CMakeFiles/wxwebview.dir/clean

libs/webview/CMakeFiles/wxwebview.dir/depend:
	cd "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build/cmake/lib/webview" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview" "/Users/abdelqayyimmaazouyahaya/Desktop/Projects/C++ Tic-Tac-Toe/wxWidgets/build-mac/libs/webview/CMakeFiles/wxwebview.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : libs/webview/CMakeFiles/wxwebview.dir/depend

