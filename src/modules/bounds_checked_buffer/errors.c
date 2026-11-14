/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Safe Memory Copy and Buffer Slicing with Bounds Check.
 * Module: bounds_checked_buffer
 */

typedef enum bounds_checked_buffer_error_status {
    BOUNDS_CHECKED_BUFFER_OK = 0,
    BOUNDS_CHECKED_BUFFER_ERR_INVALID_PARAM = -10,
    BOUNDS_CHECKED_BUFFER_ERR_CAPACITY_LIMIT = -11,
    BOUNDS_CHECKED_BUFFER_ERR_NUMERICAL_FAULT = -12
} bounds_checked_buffer_error_status_t;

const char* bounds_checked_buffer_error_string(bounds_checked_buffer_error_status_t err) {
    switch (err) {
        case BOUNDS_CHECKED_BUFFER_OK: return "Operational success";
        case BOUNDS_CHECKED_BUFFER_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case BOUNDS_CHECKED_BUFFER_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case BOUNDS_CHECKED_BUFFER_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
