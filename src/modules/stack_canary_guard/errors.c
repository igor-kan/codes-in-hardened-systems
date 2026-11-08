/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Software-Enforced Stack Canary Verification Harness.
 * Module: stack_canary_guard
 */

typedef enum stack_canary_guard_error {
    STACK_CANARY_GUARD_OK = 0,
    STACK_CANARY_GUARD_ERR_NULL = -100,
    STACK_CANARY_GUARD_ERR_CAPACITY = -101,
    STACK_CANARY_GUARD_ERR_CONVERGENCE = -102
} stack_canary_guard_error_t;

const char* stack_canary_guard_strerror(stack_canary_guard_error_t err) {
    switch (err) {
        case STACK_CANARY_GUARD_OK: return "Success";
        case STACK_CANARY_GUARD_ERR_NULL: return "Encountered null pointer argument";
        case STACK_CANARY_GUARD_ERR_CAPACITY: return "Capacity limit exceeded";
        case STACK_CANARY_GUARD_ERR_CONVERGENCE: return "Numerical algorithm failed to converge";
        default: return "Unknown error";
    }
}
