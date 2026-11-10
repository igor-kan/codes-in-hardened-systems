/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

#define SAFE_STACK_PROTECTOR_CACHE_LINE 64
#define SAFE_STACK_PROTECTOR_TILE_DIM 32

void safe_stack_protector_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += SAFE_STACK_PROTECTOR_TILE_DIM) {
        size_t r_end = (r + SAFE_STACK_PROTECTOR_TILE_DIM < rows) ? r + SAFE_STACK_PROTECTOR_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00003;
            }
        }
    }
}
