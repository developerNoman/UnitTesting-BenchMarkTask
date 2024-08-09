
cmake_minimum_required(VERSION 3.10)
project(MyProjectTests)

enable_testing()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(GOOGLETEST_DIR ${CMAKE_SOURCE_DIR}/external/googletest)

add_subdirectory(${GOOGLETEST_DIR} ${CMAKE_BINARY_DIR}/googletest)


include_directories(${GOOGLETEST_DIR}/googletest/include)
include_directories(${GOOGLETEST_DIR}/googlemock/include)
include_directories(${CMAKE_SOURCE_DIR}/include) 

add_executable(runTests unittest.cpp) 

target_link_libraries(runTests gtest gmock pthread codility)

add_test(NAME runTests COMMAND runTests)
