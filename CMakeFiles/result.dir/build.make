# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/anuswan/Documents/ti/pieces-monnaie

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anuswan/Documents/ti/pieces-monnaie

# Include any dependencies generated for this target.
include CMakeFiles/result.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/result.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/result.dir/flags.make

CMakeFiles/result.dir/result.cpp.o: CMakeFiles/result.dir/flags.make
CMakeFiles/result.dir/result.cpp.o: result.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anuswan/Documents/ti/pieces-monnaie/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/result.dir/result.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/result.dir/result.cpp.o -c /home/anuswan/Documents/ti/pieces-monnaie/result.cpp

CMakeFiles/result.dir/result.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/result.dir/result.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anuswan/Documents/ti/pieces-monnaie/result.cpp > CMakeFiles/result.dir/result.cpp.i

CMakeFiles/result.dir/result.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/result.dir/result.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anuswan/Documents/ti/pieces-monnaie/result.cpp -o CMakeFiles/result.dir/result.cpp.s

CMakeFiles/result.dir/result.cpp.o.requires:

.PHONY : CMakeFiles/result.dir/result.cpp.o.requires

CMakeFiles/result.dir/result.cpp.o.provides: CMakeFiles/result.dir/result.cpp.o.requires
	$(MAKE) -f CMakeFiles/result.dir/build.make CMakeFiles/result.dir/result.cpp.o.provides.build
.PHONY : CMakeFiles/result.dir/result.cpp.o.provides

CMakeFiles/result.dir/result.cpp.o.provides.build: CMakeFiles/result.dir/result.cpp.o


# Object files for target result
result_OBJECTS = \
"CMakeFiles/result.dir/result.cpp.o"

# External object files for target result
result_EXTERNAL_OBJECTS =

bin/result: CMakeFiles/result.dir/result.cpp.o
bin/result: CMakeFiles/result.dir/build.make
bin/result: /usr/local/lib/libopencv_shape.so.3.2.0
bin/result: /usr/local/lib/libopencv_stitching.so.3.2.0
bin/result: /usr/local/lib/libopencv_superres.so.3.2.0
bin/result: /usr/local/lib/libopencv_videostab.so.3.2.0
bin/result: /usr/local/lib/libopencv_viz.so.3.2.0
bin/result: /usr/local/lib/libopencv_objdetect.so.3.2.0
bin/result: /usr/local/lib/libopencv_calib3d.so.3.2.0
bin/result: /usr/local/lib/libopencv_features2d.so.3.2.0
bin/result: /usr/local/lib/libopencv_flann.so.3.2.0
bin/result: /usr/local/lib/libopencv_highgui.so.3.2.0
bin/result: /usr/local/lib/libopencv_ml.so.3.2.0
bin/result: /usr/local/lib/libopencv_photo.so.3.2.0
bin/result: /usr/local/lib/libopencv_video.so.3.2.0
bin/result: /usr/local/lib/libopencv_videoio.so.3.2.0
bin/result: /usr/local/lib/libopencv_imgcodecs.so.3.2.0
bin/result: /usr/local/lib/libopencv_imgproc.so.3.2.0
bin/result: /usr/local/lib/libopencv_core.so.3.2.0
bin/result: CMakeFiles/result.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anuswan/Documents/ti/pieces-monnaie/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/result"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/result.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/result.dir/build: bin/result

.PHONY : CMakeFiles/result.dir/build

CMakeFiles/result.dir/requires: CMakeFiles/result.dir/result.cpp.o.requires

.PHONY : CMakeFiles/result.dir/requires

CMakeFiles/result.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/result.dir/cmake_clean.cmake
.PHONY : CMakeFiles/result.dir/clean

CMakeFiles/result.dir/depend:
	cd /home/anuswan/Documents/ti/pieces-monnaie && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anuswan/Documents/ti/pieces-monnaie /home/anuswan/Documents/ti/pieces-monnaie /home/anuswan/Documents/ti/pieces-monnaie /home/anuswan/Documents/ti/pieces-monnaie /home/anuswan/Documents/ti/pieces-monnaie/CMakeFiles/result.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/result.dir/depend

