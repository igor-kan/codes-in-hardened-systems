/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

#define CONSTANT_TIME_CRYPTO_MEM_CACHE_LINE 64
#define CONSTANT_TIME_CRYPTO_MEM_TILE_DIM 32

void constant_time_crypto_mem_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += CONSTANT_TIME_CRYPTO_MEM_TILE_DIM) {
        size_t r_end = (r + CONSTANT_TIME_CRYPTO_MEM_TILE_DIM < rows) ? r + CONSTANT_TIME_CRYPTO_MEM_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00003;
            }
        }
    }
}
