cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install)

option(BUILD_UNITTEST "Build unit tests" ON)

option(BUILD_BENCHMARK "Build benchmarks" ON)

option(ENABLE_TESTING "Enable testing and benchmarks" ON)

add_subdirectory(src)
add_subdirectory(app)

if(ENABLE_TESTING)
    if(BUILD_UNITTEST)
        add_subdirectory(unittest)
    endif()

    if(BUILD_BENCHMARK)
        add_subdirectory(benchmark)
    endif()
endif()

# //cmake -DBUILD_BENCHMARK=OFF ..
# cmake -DBUILD_BENCHMARK=OFF ..
# cmake -DENABLE_TESTING=OFF ..