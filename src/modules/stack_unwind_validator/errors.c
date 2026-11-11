/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Strict Call Frame and Return Pointer Validator.
 * Module: stack_unwind_validator
 */

typedef enum stack_unwind_validator_error_code {
    STACK_UNWIND_VALIDATOR_STATUS_OK = 0,
    STACK_UNWIND_VALIDATOR_ERR_NULL_PTR = -20,
    STACK_UNWIND_VALIDATOR_ERR_OUT_OF_BOUNDS = -21,
    STACK_UNWIND_VALIDATOR_ERR_DIVERGENCE = -22
} stack_unwind_validator_error_code_t;

const char* stack_unwind_validator_error_message(stack_unwind_validator_error_code_t code) {
    switch (code) {
        case STACK_UNWIND_VALIDATOR_STATUS_OK: return "Operational success";
        case STACK_UNWIND_VALIDATOR_ERR_NULL_PTR: return "Null pointer argument";
        case STACK_UNWIND_VALIDATOR_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case STACK_UNWIND_VALIDATOR_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
