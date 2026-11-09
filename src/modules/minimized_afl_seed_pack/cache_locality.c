/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#define MINIMIZED_AFL_SEED_PACK_CACHE_LINE 64
#define MINIMIZED_AFL_SEED_PACK_TILE_DIM 32

void minimized_afl_seed_pack_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += MINIMIZED_AFL_SEED_PACK_TILE_DIM) {
        size_t r_end = (r + MINIMIZED_AFL_SEED_PACK_TILE_DIM < rows) ? r + MINIMIZED_AFL_SEED_PACK_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00005;
            }
        }
    }
}
