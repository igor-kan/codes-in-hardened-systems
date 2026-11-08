/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

#define SECCOMP_SYSCALL_FILTER_CACHE_LINE_SIZE 64
#define SECCOMP_SYSCALL_FILTER_L1_TILE_SIZE 32

void seccomp_syscall_filter_cache_tiled_transform(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += SECCOMP_SYSCALL_FILTER_L1_TILE_SIZE) {
        size_t r_end = (r + SECCOMP_SYSCALL_FILTER_L1_TILE_SIZE < rows) ? r + SECCOMP_SYSCALL_FILTER_L1_TILE_SIZE : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.0001;
            }
        }
    }
}
