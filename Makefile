# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/damien/Puissance4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/damien/Puissance4

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running interactive CMake command-line interface..."
	/usr/bin/cmake -i .
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/damien/Puissance4/CMakeFiles /home/damien/Puissance4/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/damien/Puissance4/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named puissance4

# Build rule for target.
puissance4: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 puissance4
.PHONY : puissance4

# fast build rule for target.
puissance4/fast:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/build
.PHONY : puissance4/fast

# target to build an object file
src/afficheGrille.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/afficheGrille.o
.PHONY : src/afficheGrille.o

# target to preprocess a source file
src/afficheGrille.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/afficheGrille.i
.PHONY : src/afficheGrille.i

# target to generate assembly for a file
src/afficheGrille.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/afficheGrille.s
.PHONY : src/afficheGrille.s

# target to build an object file
src/choix_j.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/choix_j.o
.PHONY : src/choix_j.o

# target to preprocess a source file
src/choix_j.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/choix_j.i
.PHONY : src/choix_j.i

# target to generate assembly for a file
src/choix_j.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/choix_j.s
.PHONY : src/choix_j.s

# target to build an object file
src/choix_j2.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/choix_j2.o
.PHONY : src/choix_j2.o

# target to preprocess a source file
src/choix_j2.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/choix_j2.i
.PHONY : src/choix_j2.i

# target to generate assembly for a file
src/choix_j2.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/choix_j2.s
.PHONY : src/choix_j2.s

# target to build an object file
src/initialisationgrille.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/initialisationgrille.o
.PHONY : src/initialisationgrille.o

# target to preprocess a source file
src/initialisationgrille.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/initialisationgrille.i
.PHONY : src/initialisationgrille.i

# target to generate assembly for a file
src/initialisationgrille.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/initialisationgrille.s
.PHONY : src/initialisationgrille.s

# target to build an object file
src/menu.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/menu.o
.PHONY : src/menu.o

# target to preprocess a source file
src/menu.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/menu.i
.PHONY : src/menu.i

# target to generate assembly for a file
src/menu.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/menu.s
.PHONY : src/menu.s

# target to build an object file
src/puissance4.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/puissance4.o
.PHONY : src/puissance4.o

# target to preprocess a source file
src/puissance4.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/puissance4.i
.PHONY : src/puissance4.i

# target to generate assembly for a file
src/puissance4.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/puissance4.s
.PHONY : src/puissance4.s

# target to build an object file
src/verif.o:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/verif.o
.PHONY : src/verif.o

# target to preprocess a source file
src/verif.i:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/verif.i
.PHONY : src/verif.i

# target to generate assembly for a file
src/verif.s:
	$(MAKE) -f CMakeFiles/puissance4.dir/build.make CMakeFiles/puissance4.dir/src/verif.s
.PHONY : src/verif.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... puissance4"
	@echo "... rebuild_cache"
	@echo "... src/afficheGrille.o"
	@echo "... src/afficheGrille.i"
	@echo "... src/afficheGrille.s"
	@echo "... src/choix_j.o"
	@echo "... src/choix_j.i"
	@echo "... src/choix_j.s"
	@echo "... src/choix_j2.o"
	@echo "... src/choix_j2.i"
	@echo "... src/choix_j2.s"
	@echo "... src/initialisationgrille.o"
	@echo "... src/initialisationgrille.i"
	@echo "... src/initialisationgrille.s"
	@echo "... src/menu.o"
	@echo "... src/menu.i"
	@echo "... src/menu.s"
	@echo "... src/puissance4.o"
	@echo "... src/puissance4.i"
	@echo "... src/puissance4.s"
	@echo "... src/verif.o"
	@echo "... src/verif.i"
	@echo "... src/verif.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
