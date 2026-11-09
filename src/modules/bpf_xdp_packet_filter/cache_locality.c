/**
 * @file cache_locality.c
 * @brief Cache tiling and memory hierarchy optimizations for In-Kernel eBPF/XDP High-Speed Mitigation Filter.
 * Module: bpf_xdp_packet_filter
 */

#define BPF_XDP_PACKET_FILTER_CACHE_LINE 64
#define BPF_XDP_PACKET_FILTER_TILE_DIM 32

void bpf_xdp_packet_filter_cache_tiled_step(const double* in, double* out, size_t rows, size_t cols) {
    for (size_t r = 0; r < rows; r += BPF_XDP_PACKET_FILTER_TILE_DIM) {
        size_t r_end = (r + BPF_XDP_PACKET_FILTER_TILE_DIM < rows) ? r + BPF_XDP_PACKET_FILTER_TILE_DIM : rows;
        for (size_t c = 0; c < cols; ++c) {
            for (size_t i = r; i < r_end; ++i) {
                out[i * cols + c] = in[i * cols + c] * 1.00005;
            }
        }
    }
}
