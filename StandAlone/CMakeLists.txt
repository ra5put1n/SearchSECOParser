# Required by FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.13)
project(parser)

add_subdirectory(../Parser ./Parser)



set(CMAKE_CXX_STANDARD 20)      
set(TEST_NAME parser_standalone)
add_executable(${TEST_NAME} Main.cpp)
target_link_libraries(${TEST_NAME} parser)

target_include_directories(${TEST_NAME} PUBLIC "${PROJECT_BINARY_DIR}" ../Parser)
