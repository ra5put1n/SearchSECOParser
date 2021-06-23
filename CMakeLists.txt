# This program has been developed by students from the bachelor Computer Science at
# Utrecht University within the Software Project course.
# © Copyright Utrecht University (Department of Information and Computing Sciences)

# Required by FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.13)
project(SearchSECOParser)

add_subdirectory(libSearchSECOParser)
add_subdirectory(SearchSECOParser)
add_subdirectory(tests)
add_subdirectory(tests/Integration)
