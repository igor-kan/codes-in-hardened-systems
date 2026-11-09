/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Forward-Edge Control-Flow Integrity Validation.
 * Module: cfi_indirect_call_check
 */

#define CFI_INDIRECT_CALL_CHECK_CACHE_LINE 64
#define CFI_INDIRECT_CALL_CHECK_TILE_DIM 32

void cfi_indirect_call_check_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += CFI_INDIRECT_CALL_CHECK_TILE_DIM) {
        size_t r_end = (r + CFI_INDIRECT_CALL_CHECK_TILE_DIM < rows) ? r + CFI_INDIRECT_CALL_CHECK_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00005;
            }
        }
    }
}
