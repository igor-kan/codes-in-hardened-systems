/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Stack Canary Generation and Epilogue Verification.
 * Module: canary_stack_sentinel
 */

typedef enum canary_stack_sentinel_error {
    CANARY_STACK_SENTINEL_SUCCESS = 0,
    CANARY_STACK_SENTINEL_ERR_INVALID_INPUT = -1,
    CANARY_STACK_SENTINEL_ERR_BUFFER_OVERFLOW = -2,
    CANARY_STACK_SENTINEL_ERR_CONVERGENCE_FAIL = -3
} canary_stack_sentinel_error_t;

const char* canary_stack_sentinel_str_error(canary_stack_sentinel_error_t code) {
    switch (code) {
        case CANARY_STACK_SENTINEL_SUCCESS: return "Operation completed successfully";
        case CANARY_STACK_SENTINEL_ERR_INVALID_INPUT: return "Input argument violates domain preconditions";
        case CANARY_STACK_SENTINEL_ERR_BUFFER_OVERFLOW: return "Output buffer capacity exceeded";
        case CANARY_STACK_SENTINEL_ERR_CONVERGENCE_FAIL: return "Numerical algorithm failed to converge within limit";
        default: return "Unrecognized error code";
    }
}
