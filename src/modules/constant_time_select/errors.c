/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Branchless Constant-Time Conditional Multiplexer.
 * Module: constant_time_select
 */

typedef enum constant_time_select_error_status {
    CONSTANT_TIME_SELECT_OK = 0,
    CONSTANT_TIME_SELECT_ERR_INVALID_PARAM = -10,
    CONSTANT_TIME_SELECT_ERR_CAPACITY_LIMIT = -11,
    CONSTANT_TIME_SELECT_ERR_NUMERICAL_FAULT = -12
} constant_time_select_error_status_t;

const char* constant_time_select_error_string(constant_time_select_error_status_t err) {
    switch (err) {
        case CONSTANT_TIME_SELECT_OK: return "Operational success";
        case CONSTANT_TIME_SELECT_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case CONSTANT_TIME_SELECT_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case CONSTANT_TIME_SELECT_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
