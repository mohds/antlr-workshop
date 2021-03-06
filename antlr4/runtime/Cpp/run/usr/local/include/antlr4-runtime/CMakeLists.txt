# CMakeLists.txt

# minumum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

LIST (APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
# compiler must be 11 or 14
SET (CMAKE_CXX_STANDARD 14)

add_executable(test_antlr main.cpp)

# set variable pointing to the antlr tool that supports C++
SET (ANTLR4CPP_JAR_LOCATION ${PROJECT_SOURCE_DIR}/thirdparty/antlr/antlr-4.7.1-complete.jar) 

# include the runtime to compile against
include_directories(${ANTLR4CPP_INCLUDE_DIRS})
link_directories(${ANTLR4CPP_LIBS})
message(STATUS "Found antlr4cpp libs: ${ANTLR4CPP_LIBS} and includes: ${ANTLR4CPP_INCLUDE_DIRS}")

# Call macro to add lexer and grammar to your build dependencies
# NOTE: Here, we define "antlrcpptest" as our project's namespace
antlr4cpp_process_grammar(demo antlrcpptest ${CMAKE_CURRENT_SOURCE_DIR}/TLexer.g4 ${CMAKE_CURRENT_SOURCE_DIR}/TParser.g4)

# include generated files in project environment
include_directories(${antlr4cpp_include_dirs_antlrcpptest})

# add generated grammar to demo binary target
add_executable(test_antlr main.cpp ${antlr4cpp_src_files_antlrcpptest})
add_dependencies(test_antlr antlr4cpp antlr4cpp_generation_antlrcpptest)
target_link_libraries(test_antlr antlr4-runtime)
