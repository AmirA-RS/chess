# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess

# Include any dependencies generated for this target.
include CMakeFiles/RoboChess.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RoboChess.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RoboChess.dir/flags.make

CMakeFiles/RoboChess.dir/src/main.cpp.o: CMakeFiles/RoboChess.dir/flags.make
CMakeFiles/RoboChess.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RoboChess.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RoboChess.dir/src/main.cpp.o -c /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/main.cpp

CMakeFiles/RoboChess.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RoboChess.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/main.cpp > CMakeFiles/RoboChess.dir/src/main.cpp.i

CMakeFiles/RoboChess.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RoboChess.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/main.cpp -o CMakeFiles/RoboChess.dir/src/main.cpp.s

CMakeFiles/RoboChess.dir/src/board.cpp.o: CMakeFiles/RoboChess.dir/flags.make
CMakeFiles/RoboChess.dir/src/board.cpp.o: src/board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RoboChess.dir/src/board.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RoboChess.dir/src/board.cpp.o -c /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/board.cpp

CMakeFiles/RoboChess.dir/src/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RoboChess.dir/src/board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/board.cpp > CMakeFiles/RoboChess.dir/src/board.cpp.i

CMakeFiles/RoboChess.dir/src/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RoboChess.dir/src/board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/board.cpp -o CMakeFiles/RoboChess.dir/src/board.cpp.s

CMakeFiles/RoboChess.dir/src/helper.cpp.o: CMakeFiles/RoboChess.dir/flags.make
CMakeFiles/RoboChess.dir/src/helper.cpp.o: src/helper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RoboChess.dir/src/helper.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RoboChess.dir/src/helper.cpp.o -c /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/helper.cpp

CMakeFiles/RoboChess.dir/src/helper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RoboChess.dir/src/helper.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/helper.cpp > CMakeFiles/RoboChess.dir/src/helper.cpp.i

CMakeFiles/RoboChess.dir/src/helper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RoboChess.dir/src/helper.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/helper.cpp -o CMakeFiles/RoboChess.dir/src/helper.cpp.s

CMakeFiles/RoboChess.dir/src/user.cpp.o: CMakeFiles/RoboChess.dir/flags.make
CMakeFiles/RoboChess.dir/src/user.cpp.o: src/user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RoboChess.dir/src/user.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RoboChess.dir/src/user.cpp.o -c /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/user.cpp

CMakeFiles/RoboChess.dir/src/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RoboChess.dir/src/user.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/user.cpp > CMakeFiles/RoboChess.dir/src/user.cpp.i

CMakeFiles/RoboChess.dir/src/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RoboChess.dir/src/user.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/user.cpp -o CMakeFiles/RoboChess.dir/src/user.cpp.s

CMakeFiles/RoboChess.dir/src/setting.cpp.o: CMakeFiles/RoboChess.dir/flags.make
CMakeFiles/RoboChess.dir/src/setting.cpp.o: src/setting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RoboChess.dir/src/setting.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RoboChess.dir/src/setting.cpp.o -c /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/setting.cpp

CMakeFiles/RoboChess.dir/src/setting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RoboChess.dir/src/setting.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/setting.cpp > CMakeFiles/RoboChess.dir/src/setting.cpp.i

CMakeFiles/RoboChess.dir/src/setting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RoboChess.dir/src/setting.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/setting.cpp -o CMakeFiles/RoboChess.dir/src/setting.cpp.s

CMakeFiles/RoboChess.dir/src/xo.cpp.o: CMakeFiles/RoboChess.dir/flags.make
CMakeFiles/RoboChess.dir/src/xo.cpp.o: src/xo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RoboChess.dir/src/xo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RoboChess.dir/src/xo.cpp.o -c /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/xo.cpp

CMakeFiles/RoboChess.dir/src/xo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RoboChess.dir/src/xo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/xo.cpp > CMakeFiles/RoboChess.dir/src/xo.cpp.i

CMakeFiles/RoboChess.dir/src/xo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RoboChess.dir/src/xo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/src/xo.cpp -o CMakeFiles/RoboChess.dir/src/xo.cpp.s

# Object files for target RoboChess
RoboChess_OBJECTS = \
"CMakeFiles/RoboChess.dir/src/main.cpp.o" \
"CMakeFiles/RoboChess.dir/src/board.cpp.o" \
"CMakeFiles/RoboChess.dir/src/helper.cpp.o" \
"CMakeFiles/RoboChess.dir/src/user.cpp.o" \
"CMakeFiles/RoboChess.dir/src/setting.cpp.o" \
"CMakeFiles/RoboChess.dir/src/xo.cpp.o"

# External object files for target RoboChess
RoboChess_EXTERNAL_OBJECTS =

RoboChess: CMakeFiles/RoboChess.dir/src/main.cpp.o
RoboChess: CMakeFiles/RoboChess.dir/src/board.cpp.o
RoboChess: CMakeFiles/RoboChess.dir/src/helper.cpp.o
RoboChess: CMakeFiles/RoboChess.dir/src/user.cpp.o
RoboChess: CMakeFiles/RoboChess.dir/src/setting.cpp.o
RoboChess: CMakeFiles/RoboChess.dir/src/xo.cpp.o
RoboChess: CMakeFiles/RoboChess.dir/build.make
RoboChess: CMakeFiles/RoboChess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable RoboChess"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RoboChess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RoboChess.dir/build: RoboChess

.PHONY : CMakeFiles/RoboChess.dir/build

CMakeFiles/RoboChess.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RoboChess.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RoboChess.dir/clean

CMakeFiles/RoboChess.dir/depend:
	cd /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess /home/amirabbas/Desktop/Ap/chess/Desktop/Ap/RoboChess/CMakeFiles/RoboChess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RoboChess.dir/depend

