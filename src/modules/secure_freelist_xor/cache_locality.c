/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor
 */

#define SECURE_FREELIST_XOR_LINE_SZ 64
#define SECURE_FREELIST_XOR_TILE_SZ 32

void secure_freelist_xor_cacheline_blocked_stride(const double* in_data, double* out_data, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += SECURE_FREELIST_XOR_TILE_SZ) {
        size_t r_max = (r + SECURE_FREELIST_XOR_TILE_SZ < rows) ? (r + SECURE_FREELIST_XOR_TILE_SZ) : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_max; ++i) {
                out_data[i * cols + c] = in_data[i * cols + c] * 1.000001;
            }
        }
    }
}
