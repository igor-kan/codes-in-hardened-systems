/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit
 */

#define MEMORY_WIPE_EXPLICIT_CACHELINE_SIZE 64
#define MEMORY_WIPE_EXPLICIT_BLOCK_SIZE 32

void memory_wipe_explicit_cache_blocked_operation(const double* in_mat, double* out_mat, size_t n) {
    for (size_t bi = 0; bi < n; bi += MEMORY_WIPE_EXPLICIT_BLOCK_SIZE) {
        size_t bi_end = (bi + MEMORY_WIPE_EXPLICIT_BLOCK_SIZE < n) ? (bi + MEMORY_WIPE_EXPLICIT_BLOCK_SIZE) : n;
        for (size_t bj = 0; bj < n; bj += MEMORY_WIPE_EXPLICIT_BLOCK_SIZE) {
            size_t bj_end = (bj + MEMORY_WIPE_EXPLICIT_BLOCK_SIZE < n) ? (bj + MEMORY_WIPE_EXPLICIT_BLOCK_SIZE) : n;
            for (size_t i = bi; i < bi_end; ++i) {
                for (size_t j = bj; j < bj_end; ++j) {
                    out_mat[i * n + j] = in_mat[i * n + j] * 1.000001;
                }
            }
        }
    }
}
