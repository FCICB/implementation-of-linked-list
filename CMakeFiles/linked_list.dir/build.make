# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\linked_list.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\linked_list.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\linked_list.dir\flags.make

CMakeFiles\linked_list.dir\main.cpp.obj: CMakeFiles\linked_list.dir\flags.make
CMakeFiles\linked_list.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linked_list.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\linked_list.dir\main.cpp.obj /FdCMakeFiles\linked_list.dir\ /FS -c "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\main.cpp"
<<

CMakeFiles\linked_list.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linked_list.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\linked_list.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\main.cpp"
<<

CMakeFiles\linked_list.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linked_list.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\linked_list.dir\main.cpp.s /c "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\main.cpp"
<<

CMakeFiles\linked_list.dir\linkedList.cpp.obj: CMakeFiles\linked_list.dir\flags.make
CMakeFiles\linked_list.dir\linkedList.cpp.obj: ..\linkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/linked_list.dir/linkedList.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\linked_list.dir\linkedList.cpp.obj /FdCMakeFiles\linked_list.dir\ /FS -c "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\linkedList.cpp"
<<

CMakeFiles\linked_list.dir\linkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linked_list.dir/linkedList.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\linked_list.dir\linkedList.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\linkedList.cpp"
<<

CMakeFiles\linked_list.dir\linkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linked_list.dir/linkedList.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\linked_list.dir\linkedList.cpp.s /c "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\linkedList.cpp"
<<

CMakeFiles\linked_list.dir\doublyLinkedList.cpp.obj: CMakeFiles\linked_list.dir\flags.make
CMakeFiles\linked_list.dir\doublyLinkedList.cpp.obj: doublyLinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/linked_list.dir/doublyLinkedList.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\linked_list.dir\doublyLinkedList.cpp.obj /FdCMakeFiles\linked_list.dir\ /FS -c "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\doublyLinkedList.cpp"
<<

CMakeFiles\linked_list.dir\doublyLinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linked_list.dir/doublyLinkedList.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe > CMakeFiles\linked_list.dir\doublyLinkedList.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\doublyLinkedList.cpp"
<<

CMakeFiles\linked_list.dir\doublyLinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linked_list.dir/doublyLinkedList.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\linked_list.dir\doublyLinkedList.cpp.s /c "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\doublyLinkedList.cpp"
<<

# Object files for target linked_list
linked_list_OBJECTS = \
"CMakeFiles\linked_list.dir\main.cpp.obj" \
"CMakeFiles\linked_list.dir\linkedList.cpp.obj" \
"CMakeFiles\linked_list.dir\doublyLinkedList.cpp.obj"

# External object files for target linked_list
linked_list_EXTERNAL_OBJECTS =

linked_list.exe: CMakeFiles\linked_list.dir\main.cpp.obj
linked_list.exe: CMakeFiles\linked_list.dir\linkedList.cpp.obj
linked_list.exe: CMakeFiles\linked_list.dir\doublyLinkedList.cpp.obj
linked_list.exe: CMakeFiles\linked_list.dir\build.make
linked_list.exe: CMakeFiles\linked_list.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable linked_list.exe"
	"C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\linked_list.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\COMMUN~1\VC\Tools\MSVC\1429~1.301\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\linked_list.dir\objects1.rsp @<<
 /out:linked_list.exe /implib:linked_list.lib /pdb:"C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\linked_list.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\linked_list.dir\build: linked_list.exe
.PHONY : CMakeFiles\linked_list.dir\build

CMakeFiles\linked_list.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\linked_list.dir\cmake_clean.cmake
.PHONY : CMakeFiles\linked_list.dir\clean

CMakeFiles\linked_list.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder" "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder" "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug" "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug" "C:\Users\EGYPT\Documents\GitHub\Datastructures\New folder\cmake-build-debug\CMakeFiles\linked_list.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\linked_list.dir\depend

