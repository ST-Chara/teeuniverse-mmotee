# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/flowerfell-sans/桌面/teeuniverse-mmotee

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck

# Include any dependencies generated for this target.
include CMakeFiles/test_localization.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_localization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_localization.dir/flags.make

CMakeFiles/test_localization.dir/src/unittest/localization.cpp.o: CMakeFiles/test_localization.dir/flags.make
CMakeFiles/test_localization.dir/src/unittest/localization.cpp.o: ../src/unittest/localization.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_localization.dir/src/unittest/localization.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_localization.dir/src/unittest/localization.cpp.o -c /home/flowerfell-sans/桌面/teeuniverse-mmotee/src/unittest/localization.cpp

CMakeFiles/test_localization.dir/src/unittest/localization.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_localization.dir/src/unittest/localization.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/flowerfell-sans/桌面/teeuniverse-mmotee/src/unittest/localization.cpp > CMakeFiles/test_localization.dir/src/unittest/localization.cpp.i

CMakeFiles/test_localization.dir/src/unittest/localization.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_localization.dir/src/unittest/localization.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/flowerfell-sans/桌面/teeuniverse-mmotee/src/unittest/localization.cpp -o CMakeFiles/test_localization.dir/src/unittest/localization.cpp.s

# Object files for target test_localization
test_localization_OBJECTS = \
"CMakeFiles/test_localization.dir/src/unittest/localization.cpp.o"

# External object files for target test_localization
test_localization_EXTERNAL_OBJECTS =

build/release/linux/test/test_localization: CMakeFiles/test_localization.dir/src/unittest/localization.cpp.o
build/release/linux/test/test_localization: CMakeFiles/test_localization.dir/build.make
build/release/linux/test/test_localization: build/release/linux/lib/libteeuniverse_shared.a
build/release/linux/test/test_localization: /usr/lib/x86_64-linux-gnu/libicui18n.so
build/release/linux/test/test_localization: /usr/lib/x86_64-linux-gnu/libicuuc.so
build/release/linux/test/test_localization: CMakeFiles/test_localization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable build/release/linux/test/test_localization"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_localization.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_localization.dir/build: build/release/linux/test/test_localization

.PHONY : CMakeFiles/test_localization.dir/build

CMakeFiles/test_localization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_localization.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_localization.dir/clean

CMakeFiles/test_localization.dir/depend:
	cd /home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/flowerfell-sans/桌面/teeuniverse-mmotee /home/flowerfell-sans/桌面/teeuniverse-mmotee /home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck /home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck /home/flowerfell-sans/桌面/teeuniverse-mmotee/fuck/CMakeFiles/test_localization.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_localization.dir/depend
