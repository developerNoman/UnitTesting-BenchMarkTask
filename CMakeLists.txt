# cmake_minimum_required(VERSION 3.10)
# project(MyProject)

# add_subdirectory(src)
# add_subdirectory(app)

cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Define C++ standard
set(CMAKE_CXX_STANDARD 14)  # Use C++11 if needed
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the installation directory
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(unittest)
add_subdirectory(BenchMark)  # Ensure this matches the directory name