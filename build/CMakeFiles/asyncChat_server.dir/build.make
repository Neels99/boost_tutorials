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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\repo\boost_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\repo\boost_learn\build

# Include any dependencies generated for this target.
include CMakeFiles/asyncChat_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/asyncChat_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asyncChat_server.dir/flags.make

CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.obj: CMakeFiles/asyncChat_server.dir/flags.make
CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.obj: CMakeFiles/asyncChat_server.dir/includes_CXX.rsp
CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.obj: ../ThradeAsio/chat/asyncChatServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\repo\boost_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X86_64~2.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\asyncChat_server.dir\ThradeAsio\chat\asyncChatServer.cpp.obj -c F:\repo\boost_learn\ThradeAsio\chat\asyncChatServer.cpp

CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\repo\boost_learn\ThradeAsio\chat\asyncChatServer.cpp > CMakeFiles\asyncChat_server.dir\ThradeAsio\chat\asyncChatServer.cpp.i

CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\repo\boost_learn\ThradeAsio\chat\asyncChatServer.cpp -o CMakeFiles\asyncChat_server.dir\ThradeAsio\chat\asyncChatServer.cpp.s

# Object files for target asyncChat_server
asyncChat_server_OBJECTS = \
"CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.obj"

# External object files for target asyncChat_server
asyncChat_server_EXTERNAL_OBJECTS =

asyncChat_server.exe: CMakeFiles/asyncChat_server.dir/ThradeAsio/chat/asyncChatServer.cpp.obj
asyncChat_server.exe: CMakeFiles/asyncChat_server.dir/build.make
asyncChat_server.exe: libtest_libs.a
asyncChat_server.exe: testout1/libtestout1.a
asyncChat_server.exe: testout2/libtestout2.a
asyncChat_server.exe: CMakeFiles/asyncChat_server.dir/linklibs.rsp
asyncChat_server.exe: CMakeFiles/asyncChat_server.dir/objects1.rsp
asyncChat_server.exe: CMakeFiles/asyncChat_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\repo\boost_learn\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable asyncChat_server.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\asyncChat_server.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asyncChat_server.dir/build: asyncChat_server.exe

.PHONY : CMakeFiles/asyncChat_server.dir/build

CMakeFiles/asyncChat_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\asyncChat_server.dir\cmake_clean.cmake
.PHONY : CMakeFiles/asyncChat_server.dir/clean

CMakeFiles/asyncChat_server.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\repo\boost_learn F:\repo\boost_learn F:\repo\boost_learn\build F:\repo\boost_learn\build F:\repo\boost_learn\build\CMakeFiles\asyncChat_server.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asyncChat_server.dir/depend
