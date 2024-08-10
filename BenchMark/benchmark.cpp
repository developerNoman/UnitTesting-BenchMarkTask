#include <benchmark/benchmark.h>
#include "codility.h"
#include <vector>
#include <algorithm>

static void BM_BinaryGap_Small(benchmark::State& state) {
    for (auto _ : state) {
        codility::binaryGap(1041); 
    }
}
BENCHMARK(BM_BinaryGap_Small);

// static void BM_BinaryGap_Large(benchmark::State& state) {
//     for (auto _ : state) {
//         codility::binaryGap(0xFFFFFFFF);  
//     }
// }
// BENCHMARK(BM_BinaryGap_Large);


static void BM_Rotate_Small(benchmark::State& state) {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    int k = 2;  
    for (auto _ : state) {
        auto result = codility::rotate(vec, k);
    }
}
BENCHMARK(BM_Rotate_Small);

// static void BM_Rotate_Large(benchmark::State& state) {
//     std::vector<int> vec(1000, 1);  
//     int k = 500; 
//         for (auto _ : state) {
//         auto result = codility::rotate(vec, k);
//     }
// }
// BENCHMARK(BM_Rotate_Large);

BENCHMARK_MAIN();


// cmake -DCMAKE_BUILD_TYPE=Debug ..
// cmake -DCMAKE_BUILD_TYPE=Release ..
//cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-O3" ..