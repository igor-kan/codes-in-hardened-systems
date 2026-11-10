/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

#define SECCOMP_STRICT_JAIL_CACHE_LINE 64
#define SECCOMP_STRICT_JAIL_TILE_DIM 32

void seccomp_strict_jail_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += SECCOMP_STRICT_JAIL_TILE_DIM) {
        size_t r_end = (r + SECCOMP_STRICT_JAIL_TILE_DIM < rows) ? r + SECCOMP_STRICT_JAIL_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00003;
            }
        }
    }
}
