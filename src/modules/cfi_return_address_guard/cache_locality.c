/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

#define CFI_RETURN_ADDRESS_GUARD_CACHE_LINE 64
#define CFI_RETURN_ADDRESS_GUARD_TILE_DIM 32

void cfi_return_address_guard_cache_tiled_step_v47(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += CFI_RETURN_ADDRESS_GUARD_TILE_DIM) {
        size_t r_end = (r + CFI_RETURN_ADDRESS_GUARD_TILE_DIM < rows) ? r + CFI_RETURN_ADDRESS_GUARD_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00002;
            }
        }
    }
}
