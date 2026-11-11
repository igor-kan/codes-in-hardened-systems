/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Automated Crash Deduplication and ASan Report Triager.
 * Module: minimized_crash_triager
 */

typedef enum minimized_crash_triager_error_code {
    MINIMIZED_CRASH_TRIAGER_STATUS_OK = 0,
    MINIMIZED_CRASH_TRIAGER_ERR_NULL_PTR = -20,
    MINIMIZED_CRASH_TRIAGER_ERR_OUT_OF_BOUNDS = -21,
    MINIMIZED_CRASH_TRIAGER_ERR_DIVERGENCE = -22
} minimized_crash_triager_error_code_t;

const char* minimized_crash_triager_error_message(minimized_crash_triager_error_code_t code) {
    switch (code) {
        case MINIMIZED_CRASH_TRIAGER_STATUS_OK: return "Operational success";
        case MINIMIZED_CRASH_TRIAGER_ERR_NULL_PTR: return "Null pointer argument";
        case MINIMIZED_CRASH_TRIAGER_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case MINIMIZED_CRASH_TRIAGER_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
