#include <benchmark/benchmark.h>
#include "codility.h"


static void BM_BinaryGap(benchmark::State& state) {
    for (auto _ : state) {
        codility::binaryGap(1041);
    }
}
BENCHMARK(BM_BinaryGap);

BENCHMARK_MAIN();
