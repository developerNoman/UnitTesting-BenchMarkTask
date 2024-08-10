# UnitTesting-BenchMarkTask
This repository is about the Unit testing and Benchmarking along with the CMake Coding Structure.

<h1>Task Description:</h1>
<p>Create a benchmark/unittest task that includes multiple Codility tasks within a single header file. The unittest will test the different functions/corner cases of each task and also do benchmarking to measure the performance. (Follow the same directory structure as GCC Tasks)
<h2>Project Structure</h2>
<ul><li>Create an include directory that will contain a header file named codility.h. This header file will include the definitions of all the Codility tasks mentioned below: (Make sure to handle all corner cases/test scenarios)
<ol><li>Lesson 1: BinaryGap</li>
<li>Lesson 2: CyclicRotation</li>
</ol>
</li>
<li>Create a src directory that will contain a C++ file named codility.cpp. This file will include the implementations of all the Codility tasks defined in codility.h. Additionally, include a CMakeLists.txt file within this folder to facilitate the compilation process.</li>
<li>Add a unittest directory to the project structure. This directory will contain a unittest.cpp file. The unittest.cpp file contains different unit tests to verify the correctness of all functions for different input values. Include tests for both the expected output and edge cases. Include a CMakeLists.txt file within the unittest directory to enable the building and running of the unittest.
<li>Add a benchmark directory to the project structure.	This directory will contain a benchmark.cpp file. Measure the performance of all the functions available in the codility.h file. Also call these functions several times in a loop and measure its performance. The goal is to see some significant change in latency. Next, compile your project with optimization level 03 (level 3), Debug and Release modes through cmake flags and see their difference in performance. Include a CMakeLists.txt file within the benchmark directory to enable the building and running of the benchmark.</li>
<li>Include a top-level CMakeLists.txt file that will configure the entire project and its dependencies, including Google Unittest as a submodule.</li>
<li>Create a README.md file at the top level to provide instructions and explanations for the project.</li>
</p>
  
# Foobar

The project include the unit testing and benchmarking of the binary gap and the vector rotation c++ tasks. Its the basic project which demonstrate that how to write unittests, benchmarks inside the cmake coding structure
 
##  How to build and run the executables


```bash
mkdir build
cd build
cmake ..
make
./MyProject or ./runTests or ./my_benchmark
```

## How to build and run the executables with the option of unittests and benchmark by user decision:

```bash
mkdir build
cd build

cmake -DBUILD_BENCHMARK=OFF ..     //if You don't want benchmarks then run only this
cmake -DBUILD_BENCHMARK=OFF ..     //if you don't want unittests, then run only this
cmake -DENABLE_TESTING=OFF ..      //if you don't want both, then run this only

make
./MyProject or ./runTests or ./my_benchmark
```
