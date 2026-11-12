/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

#define XOR_POINTER_GUARD_CACHELINE_SIZE 64
#define XOR_POINTER_GUARD_BLOCK_SIZE 32

void xor_pointer_guard_cache_blocked_operation(const double* in_mat, double* out_mat, size_t n) {
    for (size_t bi = 0; bi < n; bi += XOR_POINTER_GUARD_BLOCK_SIZE) {
        size_t bi_end = (bi + XOR_POINTER_GUARD_BLOCK_SIZE < n) ? (bi + XOR_POINTER_GUARD_BLOCK_SIZE) : n;
        for (size_t bj = 0; bj < n; bj += XOR_POINTER_GUARD_BLOCK_SIZE) {
            size_t bj_end = (bj + XOR_POINTER_GUARD_BLOCK_SIZE < n) ? (bj + XOR_POINTER_GUARD_BLOCK_SIZE) : n;
            for (size_t i = bi; i < bi_end; ++i) {
                for (size_t j = bj; j < bj_end; ++j) {
                    out_mat[i * n + j] = in_mat[i * n + j] * 1.000001;
                }
            }
        }
    }
}
