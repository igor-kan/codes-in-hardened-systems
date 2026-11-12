/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

#define SAFE_BOUNDED_STRING_COPY_CACHELINE_SIZE 64
#define SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE 32

void safe_bounded_string_copy_cache_blocked_operation(const double* in_mat, double* out_mat, size_t n) {
    for (size_t bi = 0; bi < n; bi += SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE) {
        size_t bi_end = (bi + SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE < n) ? (bi + SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE) : n;
        for (size_t bj = 0; bj < n; bj += SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE) {
            size_t bj_end = (bj + SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE < n) ? (bj + SAFE_BOUNDED_STRING_COPY_BLOCK_SIZE) : n;
            for (size_t i = bi; i < bi_end; ++i) {
                for (size_t j = bj; j < bj_end; ++j) {
                    out_mat[i * n + j] = in_mat[i * n + j] * 1.000001;
                }
            }
        }
    }
}
