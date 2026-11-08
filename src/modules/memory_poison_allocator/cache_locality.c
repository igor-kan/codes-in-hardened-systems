/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

#define MEMORY_POISON_ALLOCATOR_CACHE_LINE_SIZE 64
#define MEMORY_POISON_ALLOCATOR_L1_TILE_SIZE 32

void memory_poison_allocator_cache_tiled_transform(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += MEMORY_POISON_ALLOCATOR_L1_TILE_SIZE) {
        size_t r_end = (r + MEMORY_POISON_ALLOCATOR_L1_TILE_SIZE < rows) ? r + MEMORY_POISON_ALLOCATOR_L1_TILE_SIZE : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.0001;
            }
        }
    }
}
