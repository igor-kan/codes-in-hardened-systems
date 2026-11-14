/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Stack Canary Generation, Injection, and Verification.
 * Module: stack_cookie_sentinel
 */

typedef enum stack_cookie_sentinel_error_status {
    STACK_COOKIE_SENTINEL_OK = 0,
    STACK_COOKIE_SENTINEL_ERR_INVALID_PARAM = -10,
    STACK_COOKIE_SENTINEL_ERR_CAPACITY_LIMIT = -11,
    STACK_COOKIE_SENTINEL_ERR_NUMERICAL_FAULT = -12
} stack_cookie_sentinel_error_status_t;

const char* stack_cookie_sentinel_error_string(stack_cookie_sentinel_error_status_t err) {
    switch (err) {
        case STACK_COOKIE_SENTINEL_OK: return "Operational success";
        case STACK_COOKIE_SENTINEL_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case STACK_COOKIE_SENTINEL_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case STACK_COOKIE_SENTINEL_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
