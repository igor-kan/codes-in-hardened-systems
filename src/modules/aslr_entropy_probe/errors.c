/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Memory Layout Randomization Entropy Measurement Probe.
 * Module: aslr_entropy_probe
 */

typedef enum aslr_entropy_probe_error_code {
    ASLR_ENTROPY_PROBE_STATUS_OK = 0,
    ASLR_ENTROPY_PROBE_ERR_NULL_PTR = -20,
    ASLR_ENTROPY_PROBE_ERR_OUT_OF_BOUNDS = -21,
    ASLR_ENTROPY_PROBE_ERR_DIVERGENCE = -22
} aslr_entropy_probe_error_code_t;

const char* aslr_entropy_probe_error_message(aslr_entropy_probe_error_code_t code) {
    switch (code) {
        case ASLR_ENTROPY_PROBE_STATUS_OK: return "Operational success";
        case ASLR_ENTROPY_PROBE_ERR_NULL_PTR: return "Null pointer argument";
        case ASLR_ENTROPY_PROBE_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case ASLR_ENTROPY_PROBE_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
