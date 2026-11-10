/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for SafeStack Separate Stack for Return Pointer Defense.
 * Module: safe_stack_protector
 */

typedef enum safe_stack_protector_error_code {
    SAFE_STACK_PROTECTOR_STATUS_OK = 0,
    SAFE_STACK_PROTECTOR_ERR_NULL_PTR = -10,
    SAFE_STACK_PROTECTOR_ERR_OUT_OF_BOUNDS = -11,
    SAFE_STACK_PROTECTOR_ERR_DIVERGENCE = -12
} safe_stack_protector_error_code_t;

const char* safe_stack_protector_error_message(safe_stack_protector_error_code_t code) {
    switch (code) {
        case SAFE_STACK_PROTECTOR_STATUS_OK: return "Operational success";
        case SAFE_STACK_PROTECTOR_ERR_NULL_PTR: return "Null pointer argument";
        case SAFE_STACK_PROTECTOR_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case SAFE_STACK_PROTECTOR_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
