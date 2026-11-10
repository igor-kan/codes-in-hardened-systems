/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for In-Kernel eBPF/XDP Rate-Limiting SYN Flood Mitigation.
 * Module: bpf_xdp_ddos_guard
 */

#define BPF_XDP_DDOS_GUARD_CACHE_LINE 64
#define BPF_XDP_DDOS_GUARD_TILE_DIM 32

void bpf_xdp_ddos_guard_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += BPF_XDP_DDOS_GUARD_TILE_DIM) {
        size_t r_end = (r + BPF_XDP_DDOS_GUARD_TILE_DIM < rows) ? r + BPF_XDP_DDOS_GUARD_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00003;
            }
        }
    }
}
