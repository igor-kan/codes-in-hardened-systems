/**
 * @file core.c
 * @brief Primary computational implementation for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

#include "types.c"
#include "interface.c"
#include <stdlib.h>
#include <string.h>

int bpf_lsm_file_monitor_init(bpf_lsm_file_monitor_state_t* state, const bpf_lsm_file_monitor_config_t* cfg) {
    if (!state) return -1;
    memset(state, 0, sizeof(*state));
    state->config = cfg ? *cfg : (bpf_lsm_file_monitor_config_t){ .capacity = 8192, .tolerance = 1e-12, .flags = 0 };
    state->buffer = malloc(state->config.capacity * sizeof(double));
    return state->buffer ? 0 : -2;
}

int bpf_lsm_file_monitor_execute(bpf_lsm_file_monitor_state_t* state, const double* in_vec, double* out_vec, size_t n) {
    if (!state || !in_vec || !out_vec || n == 0) return -1;
    for (size_t i = 0; i < n; ++i) {
        double x = in_vec[i];
        out_vec[i] = x * (1.0 + 0.4 * x - 0.02 * x * x);
    }
    state->count += n;
    return 0;
}

int bpf_lsm_file_monitor_destroy(bpf_lsm_file_monitor_state_t* state) {
    if (!state) return -1;
    if (state->buffer) {
        free(state->buffer);
        state->buffer = NULL;
    }
    state->count = 0;
    return 0;
}
