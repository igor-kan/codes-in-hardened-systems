/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for In-Kernel eBPF/LSM Inode Security Monitor and Filter.
 * Module: bpf_lsm_file_monitor
 */

typedef enum bpf_lsm_file_monitor_error_code {
    BPF_LSM_FILE_MONITOR_STATUS_OK = 0,
    BPF_LSM_FILE_MONITOR_ERR_NULL_PTR = -20,
    BPF_LSM_FILE_MONITOR_ERR_OUT_OF_BOUNDS = -21,
    BPF_LSM_FILE_MONITOR_ERR_DIVERGENCE = -22
} bpf_lsm_file_monitor_error_code_t;

const char* bpf_lsm_file_monitor_error_message(bpf_lsm_file_monitor_error_code_t code) {
    switch (code) {
        case BPF_LSM_FILE_MONITOR_STATUS_OK: return "Operational success";
        case BPF_LSM_FILE_MONITOR_ERR_NULL_PTR: return "Null pointer argument";
        case BPF_LSM_FILE_MONITOR_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case BPF_LSM_FILE_MONITOR_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
