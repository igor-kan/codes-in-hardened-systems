/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for XOR-Cookie Encrypted Freelist Pointer Obfuscator.
 * Module: xor_pointer_guard
 */

typedef enum xor_pointer_guard_error {
    XOR_POINTER_GUARD_SUCCESS = 0,
    XOR_POINTER_GUARD_ERR_INVALID_INPUT = -1,
    XOR_POINTER_GUARD_ERR_BUFFER_OVERFLOW = -2,
    XOR_POINTER_GUARD_ERR_CONVERGENCE_FAIL = -3
} xor_pointer_guard_error_t;

const char* xor_pointer_guard_str_error(xor_pointer_guard_error_t code) {
    switch (code) {
        case XOR_POINTER_GUARD_SUCCESS: return "Operation completed successfully";
        case XOR_POINTER_GUARD_ERR_INVALID_INPUT: return "Input argument violates domain preconditions";
        case XOR_POINTER_GUARD_ERR_BUFFER_OVERFLOW: return "Output buffer capacity exceeded";
        case XOR_POINTER_GUARD_ERR_CONVERGENCE_FAIL: return "Numerical algorithm failed to converge within limit";
        default: return "Unrecognized error code";
    }
}
