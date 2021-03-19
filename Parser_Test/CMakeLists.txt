# Required by FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.13)
project(parser)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

set(CMAKE_CXX_STANDARD 11)
set(TEST_NAME parser_tests)
add_executable(${TEST_NAME} StringStream_test.cpp Tag_test.cpp AbstractSyntaxToHashable_test.cpp XmlParser_test.cpp)
target_link_libraries(${TEST_NAME} gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(${TEST_NAME})