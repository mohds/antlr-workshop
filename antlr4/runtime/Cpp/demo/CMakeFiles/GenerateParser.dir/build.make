# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/moe/Desktop/antlr4/runtime/Cpp/demo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moe/Desktop/antlr4/runtime/Cpp/demo

# Utility rule file for GenerateParser.

# Include the progress variables for this target.
include CMakeFiles/GenerateParser.dir/progress.make

CMakeFiles/GenerateParser: demo/generated/TLexer.cpp
CMakeFiles/GenerateParser: demo/generated/TParser.cpp
CMakeFiles/GenerateParser: demo/generated/TParserBaseListener.cpp
CMakeFiles/GenerateParser: demo/generated/TParserBaseVisitor.cpp
CMakeFiles/GenerateParser: demo/generated/TParserListener.cpp
CMakeFiles/GenerateParser: demo/generated/TParserVisitor.cpp


demo/generated/TLexer.cpp: demo/TLexer.g4
demo/generated/TLexer.cpp: demo/TParser.g4
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/moe/Desktop/antlr4/runtime/Cpp/demo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating demo/generated/TLexer.cpp, demo/generated/TParser.cpp, demo/generated/TParserBaseListener.cpp, demo/generated/TParserBaseVisitor.cpp, demo/generated/TParserListener.cpp, demo/generated/TParserVisitor.cpp"
	/usr/bin/cmake -E make_directory /home/moe/Desktop/antlr4/runtime/Cpp/demo/demo/generated/

demo/generated/TParser.cpp: demo/generated/TLexer.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate demo/generated/TParser.cpp

demo/generated/TParserBaseListener.cpp: demo/generated/TLexer.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate demo/generated/TParserBaseListener.cpp

demo/generated/TParserBaseVisitor.cpp: demo/generated/TLexer.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate demo/generated/TParserBaseVisitor.cpp

demo/generated/TParserListener.cpp: demo/generated/TLexer.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate demo/generated/TParserListener.cpp

demo/generated/TParserVisitor.cpp: demo/generated/TLexer.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate demo/generated/TParserVisitor.cpp

GenerateParser: CMakeFiles/GenerateParser
GenerateParser: demo/generated/TLexer.cpp
GenerateParser: demo/generated/TParser.cpp
GenerateParser: demo/generated/TParserBaseListener.cpp
GenerateParser: demo/generated/TParserBaseVisitor.cpp
GenerateParser: demo/generated/TParserListener.cpp
GenerateParser: demo/generated/TParserVisitor.cpp
GenerateParser: CMakeFiles/GenerateParser.dir/build.make

.PHONY : GenerateParser

# Rule to build all files generated by this target.
CMakeFiles/GenerateParser.dir/build: GenerateParser

.PHONY : CMakeFiles/GenerateParser.dir/build

CMakeFiles/GenerateParser.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GenerateParser.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GenerateParser.dir/clean

CMakeFiles/GenerateParser.dir/depend:
	cd /home/moe/Desktop/antlr4/runtime/Cpp/demo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moe/Desktop/antlr4/runtime/Cpp/demo /home/moe/Desktop/antlr4/runtime/Cpp/demo /home/moe/Desktop/antlr4/runtime/Cpp/demo /home/moe/Desktop/antlr4/runtime/Cpp/demo /home/moe/Desktop/antlr4/runtime/Cpp/demo/CMakeFiles/GenerateParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GenerateParser.dir/depend

