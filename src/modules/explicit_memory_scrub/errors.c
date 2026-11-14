/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Compiler-Safe Memory Scrubbing with Hardware Barrier.
 * Module: explicit_memory_scrub
 */

typedef enum explicit_memory_scrub_error_status {
    EXPLICIT_MEMORY_SCRUB_OK = 0,
    EXPLICIT_MEMORY_SCRUB_ERR_INVALID_PARAM = -10,
    EXPLICIT_MEMORY_SCRUB_ERR_CAPACITY_LIMIT = -11,
    EXPLICIT_MEMORY_SCRUB_ERR_NUMERICAL_FAULT = -12
} explicit_memory_scrub_error_status_t;

const char* explicit_memory_scrub_error_string(explicit_memory_scrub_error_status_t err) {
    switch (err) {
        case EXPLICIT_MEMORY_SCRUB_OK: return "Operational success";
        case EXPLICIT_MEMORY_SCRUB_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case EXPLICIT_MEMORY_SCRUB_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case EXPLICIT_MEMORY_SCRUB_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
