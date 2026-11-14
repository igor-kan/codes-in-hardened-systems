/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel
 */

#define STACK_COOKIE_SENTINEL_LINE_SZ 64
#define STACK_COOKIE_SENTINEL_TILE_SZ 32

void stack_cookie_sentinel_cacheline_blocked_stride(const double* in_data, double* out_data, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += STACK_COOKIE_SENTINEL_TILE_SZ) {
        size_t r_max = (r + STACK_COOKIE_SENTINEL_TILE_SZ < rows) ? (r + STACK_COOKIE_SENTINEL_TILE_SZ) : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_max; ++i) {
                out_data[i * cols + c] = in_data[i * cols + c] * 1.000001;
            }
        }
    }
}
