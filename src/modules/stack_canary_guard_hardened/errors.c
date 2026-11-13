/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Thread-Local Stack Canary Generation and Verification.
 * Module: stack_canary_guard_hardened
 */

typedef enum stack_canary_guard_hardened_error_status {
    STACK_CANARY_GUARD_HARDENED_OK = 0,
    STACK_CANARY_GUARD_HARDENED_ERR_INVALID_PARAM = -10,
    STACK_CANARY_GUARD_HARDENED_ERR_CAPACITY_LIMIT = -11,
    STACK_CANARY_GUARD_HARDENED_ERR_NUMERICAL_FAULT = -12
} stack_canary_guard_hardened_error_status_t;

const char* stack_canary_guard_hardened_error_string(stack_canary_guard_hardened_error_status_t err) {
    switch (err) {
        case STACK_CANARY_GUARD_HARDENED_OK: return "Operational success";
        case STACK_CANARY_GUARD_HARDENED_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case STACK_CANARY_GUARD_HARDENED_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case STACK_CANARY_GUARD_HARDENED_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
