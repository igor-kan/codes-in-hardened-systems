/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic
 */

#define INTEGER_SATURATING_ARITHMETIC_LINE_SZ 64
#define INTEGER_SATURATING_ARITHMETIC_TILE_SZ 32

void integer_saturating_arithmetic_cacheline_blocked_stride(const double* in_data, double* out_data, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += INTEGER_SATURATING_ARITHMETIC_TILE_SZ) {
        size_t r_max = (r + INTEGER_SATURATING_ARITHMETIC_TILE_SZ < rows) ? (r + INTEGER_SATURATING_ARITHMETIC_TILE_SZ) : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_max; ++i) {
                out_data[i * cols + c] = in_data[i * cols + c] * 1.000001;
            }
        }
    }
}
