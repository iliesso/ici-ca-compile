# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/ilja/Documents/Work/L3 Info/projetFlexbison"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build"

# Include any dependencies generated for this target.
include CMakeFiles/facile.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/facile.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/facile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/facile.dir/flags.make

facile.lex.c: ../facile.lex
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "[FLEX][FACILE_SCANNER] Building scanner with flex 2.6.4"
	cd "/home/ilja/Documents/Work/L3 Info/projetFlexbison" && /usr/bin/flex "-o/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.lex.c" facile.lex

facile.y.c: ../facile.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "[BISON][FACILE_PARSER] Building parser with bison 3.8.2"
	cd "/home/ilja/Documents/Work/L3 Info/projetFlexbison" && /usr/bin/bison -d -o "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c" facile.y

facile.y.h: facile.y.c
	@$(CMAKE_COMMAND) -E touch_nocreate facile.y.h

CMakeFiles/facile.dir/facile.lex.c.o: CMakeFiles/facile.dir/flags.make
CMakeFiles/facile.dir/facile.lex.c.o: facile.lex.c
CMakeFiles/facile.dir/facile.lex.c.o: CMakeFiles/facile.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/facile.dir/facile.lex.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/facile.dir/facile.lex.c.o -MF CMakeFiles/facile.dir/facile.lex.c.o.d -o CMakeFiles/facile.dir/facile.lex.c.o -c "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.lex.c"

CMakeFiles/facile.dir/facile.lex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/facile.dir/facile.lex.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.lex.c" > CMakeFiles/facile.dir/facile.lex.c.i

CMakeFiles/facile.dir/facile.lex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/facile.dir/facile.lex.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.lex.c" -o CMakeFiles/facile.dir/facile.lex.c.s

CMakeFiles/facile.dir/facile.y.c.o: CMakeFiles/facile.dir/flags.make
CMakeFiles/facile.dir/facile.y.c.o: facile.y.c
CMakeFiles/facile.dir/facile.y.c.o: CMakeFiles/facile.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/facile.dir/facile.y.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/facile.dir/facile.y.c.o -MF CMakeFiles/facile.dir/facile.y.c.o.d -o CMakeFiles/facile.dir/facile.y.c.o -c "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c"

CMakeFiles/facile.dir/facile.y.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/facile.dir/facile.y.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c" > CMakeFiles/facile.dir/facile.y.c.i

CMakeFiles/facile.dir/facile.y.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/facile.dir/facile.y.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/facile.y.c" -o CMakeFiles/facile.dir/facile.y.c.s

# Object files for target facile
facile_OBJECTS = \
"CMakeFiles/facile.dir/facile.lex.c.o" \
"CMakeFiles/facile.dir/facile.y.c.o"

# External object files for target facile
facile_EXTERNAL_OBJECTS =

facile: CMakeFiles/facile.dir/facile.lex.c.o
facile: CMakeFiles/facile.dir/facile.y.c.o
facile: CMakeFiles/facile.dir/build.make
facile: CMakeFiles/facile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable facile"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/facile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/facile.dir/build: facile
.PHONY : CMakeFiles/facile.dir/build

CMakeFiles/facile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/facile.dir/cmake_clean.cmake
.PHONY : CMakeFiles/facile.dir/clean

CMakeFiles/facile.dir/depend: facile.lex.c
CMakeFiles/facile.dir/depend: facile.y.c
CMakeFiles/facile.dir/depend: facile.y.h
	cd "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ilja/Documents/Work/L3 Info/projetFlexbison" "/home/ilja/Documents/Work/L3 Info/projetFlexbison" "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build" "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build" "/home/ilja/Documents/Work/L3 Info/projetFlexbison/build/CMakeFiles/facile.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/facile.dir/depend

