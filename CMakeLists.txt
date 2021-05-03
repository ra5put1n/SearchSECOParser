# This program has been developed by students from the bachelor Computer Science at
# Utrecht University within the Software Project course.
# © Copyright Utrecht University (Department of Information and Computing Sciences)

# Required by FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.13)
project(parser_full)

add_subdirectory(Parser)
add_subdirectory(StandAlone)
add_subdirectory(Parser_Test)
add_subdirectory(Parser_Test/Integration)
