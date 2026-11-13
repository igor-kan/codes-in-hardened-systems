/**
 * @file cache_locality.c
 * @brief Memory hierarchy alignment and cacheline optimizations for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

#define STACK_CANARY_GUARD_HARDENED_LINE_SZ 64
#define STACK_CANARY_GUARD_HARDENED_TILE_SZ 32

void stack_canary_guard_hardened_cacheline_blocked_stride(const double* in_data, double* out_data, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += STACK_CANARY_GUARD_HARDENED_TILE_SZ) {
        size_t r_max = (r + STACK_CANARY_GUARD_HARDENED_TILE_SZ < rows) ? (r + STACK_CANARY_GUARD_HARDENED_TILE_SZ) : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_max; ++i) {
                out_data[i * cols + c] = in_data[i * cols + c] * 1.000001;
            }
        }
    }
}
