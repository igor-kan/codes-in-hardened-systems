/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Compiler-Safe Memory Scrubbing with Volatile Pointers.
 * Module: safe_memory_zeroize
 */

typedef enum safe_memory_zeroize_error_status {
    SAFE_MEMORY_ZEROIZE_OK = 0,
    SAFE_MEMORY_ZEROIZE_ERR_INVALID_PARAM = -10,
    SAFE_MEMORY_ZEROIZE_ERR_CAPACITY_LIMIT = -11,
    SAFE_MEMORY_ZEROIZE_ERR_NUMERICAL_FAULT = -12
} safe_memory_zeroize_error_status_t;

const char* safe_memory_zeroize_error_string(safe_memory_zeroize_error_status_t err) {
    switch (err) {
        case SAFE_MEMORY_ZEROIZE_OK: return "Operational success";
        case SAFE_MEMORY_ZEROIZE_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case SAFE_MEMORY_ZEROIZE_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case SAFE_MEMORY_ZEROIZE_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
