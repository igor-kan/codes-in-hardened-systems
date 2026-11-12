/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Checked and Saturating 64-Bit Arithmetic Operations.
 * Module: integer_overflow_guard
 */

typedef enum integer_overflow_guard_error {
    INTEGER_OVERFLOW_GUARD_SUCCESS = 0,
    INTEGER_OVERFLOW_GUARD_ERR_INVALID_INPUT = -1,
    INTEGER_OVERFLOW_GUARD_ERR_BUFFER_OVERFLOW = -2,
    INTEGER_OVERFLOW_GUARD_ERR_CONVERGENCE_FAIL = -3
} integer_overflow_guard_error_t;

const char* integer_overflow_guard_str_error(integer_overflow_guard_error_t code) {
    switch (code) {
        case INTEGER_OVERFLOW_GUARD_SUCCESS: return "Operation completed successfully";
        case INTEGER_OVERFLOW_GUARD_ERR_INVALID_INPUT: return "Input argument violates domain preconditions";
        case INTEGER_OVERFLOW_GUARD_ERR_BUFFER_OVERFLOW: return "Output buffer capacity exceeded";
        case INTEGER_OVERFLOW_GUARD_ERR_CONVERGENCE_FAIL: return "Numerical algorithm failed to converge within limit";
        default: return "Unrecognized error code";
    }
}
