/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

#define HARDENED_CHUNK_ALLOC_CACHE_LINE 64
#define HARDENED_CHUNK_ALLOC_TILE_DIM 32

void hardened_chunk_alloc_cache_tiled_step_v47(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += HARDENED_CHUNK_ALLOC_TILE_DIM) {
        size_t r_end = (r + HARDENED_CHUNK_ALLOC_TILE_DIM < rows) ? r + HARDENED_CHUNK_ALLOC_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00002;
            }
        }
    }
}
