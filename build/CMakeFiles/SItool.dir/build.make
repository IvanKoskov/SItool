# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/evan/SItool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/evan/SItool/build

# Include any dependencies generated for this target.
include CMakeFiles/SItool.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SItool.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SItool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SItool.dir/flags.make

CMakeFiles/SItool.dir/codegen:
.PHONY : CMakeFiles/SItool.dir/codegen

CMakeFiles/SItool.dir/src/main.c.o: CMakeFiles/SItool.dir/flags.make
CMakeFiles/SItool.dir/src/main.c.o: /Users/evan/SItool/src/main.c
CMakeFiles/SItool.dir/src/main.c.o: CMakeFiles/SItool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/evan/SItool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SItool.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SItool.dir/src/main.c.o -MF CMakeFiles/SItool.dir/src/main.c.o.d -o CMakeFiles/SItool.dir/src/main.c.o -c /Users/evan/SItool/src/main.c

CMakeFiles/SItool.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SItool.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/evan/SItool/src/main.c > CMakeFiles/SItool.dir/src/main.c.i

CMakeFiles/SItool.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SItool.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/evan/SItool/src/main.c -o CMakeFiles/SItool.dir/src/main.c.s

CMakeFiles/SItool.dir/src/config.c.o: CMakeFiles/SItool.dir/flags.make
CMakeFiles/SItool.dir/src/config.c.o: /Users/evan/SItool/src/config.c
CMakeFiles/SItool.dir/src/config.c.o: CMakeFiles/SItool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/evan/SItool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SItool.dir/src/config.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SItool.dir/src/config.c.o -MF CMakeFiles/SItool.dir/src/config.c.o.d -o CMakeFiles/SItool.dir/src/config.c.o -c /Users/evan/SItool/src/config.c

CMakeFiles/SItool.dir/src/config.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SItool.dir/src/config.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/evan/SItool/src/config.c > CMakeFiles/SItool.dir/src/config.c.i

CMakeFiles/SItool.dir/src/config.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SItool.dir/src/config.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/evan/SItool/src/config.c -o CMakeFiles/SItool.dir/src/config.c.s

CMakeFiles/SItool.dir/src/commandsOptions.c.o: CMakeFiles/SItool.dir/flags.make
CMakeFiles/SItool.dir/src/commandsOptions.c.o: /Users/evan/SItool/src/commandsOptions.c
CMakeFiles/SItool.dir/src/commandsOptions.c.o: CMakeFiles/SItool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/evan/SItool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SItool.dir/src/commandsOptions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SItool.dir/src/commandsOptions.c.o -MF CMakeFiles/SItool.dir/src/commandsOptions.c.o.d -o CMakeFiles/SItool.dir/src/commandsOptions.c.o -c /Users/evan/SItool/src/commandsOptions.c

CMakeFiles/SItool.dir/src/commandsOptions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/SItool.dir/src/commandsOptions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/evan/SItool/src/commandsOptions.c > CMakeFiles/SItool.dir/src/commandsOptions.c.i

CMakeFiles/SItool.dir/src/commandsOptions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/SItool.dir/src/commandsOptions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/evan/SItool/src/commandsOptions.c -o CMakeFiles/SItool.dir/src/commandsOptions.c.s

# Object files for target SItool
SItool_OBJECTS = \
"CMakeFiles/SItool.dir/src/main.c.o" \
"CMakeFiles/SItool.dir/src/config.c.o" \
"CMakeFiles/SItool.dir/src/commandsOptions.c.o"

# External object files for target SItool
SItool_EXTERNAL_OBJECTS =

SItool: CMakeFiles/SItool.dir/src/main.c.o
SItool: CMakeFiles/SItool.dir/src/config.c.o
SItool: CMakeFiles/SItool.dir/src/commandsOptions.c.o
SItool: CMakeFiles/SItool.dir/build.make
SItool: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.5.sdk/usr/lib/libcurses.tbd
SItool: /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX14.5.sdk/usr/lib/libform.tbd
SItool: CMakeFiles/SItool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/evan/SItool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable SItool"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SItool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SItool.dir/build: SItool
.PHONY : CMakeFiles/SItool.dir/build

CMakeFiles/SItool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SItool.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SItool.dir/clean

CMakeFiles/SItool.dir/depend:
	cd /Users/evan/SItool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/evan/SItool /Users/evan/SItool /Users/evan/SItool/build /Users/evan/SItool/build /Users/evan/SItool/build/CMakeFiles/SItool.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SItool.dir/depend

