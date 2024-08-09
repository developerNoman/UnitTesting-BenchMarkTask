cmake_minimum_required(VERSION 3.10)
project(MyProjectBenchmark)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG main
)
FetchContent_MakeAvailable(benchmark)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_benchmark benchmark.cpp)


target_link_libraries(my_benchmark benchmark::benchmark codility)
