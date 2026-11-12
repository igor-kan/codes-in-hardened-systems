/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Truncation-Safe Bounds-Checked String Copying.
 * Module: safe_bounded_string_copy
 */

typedef enum safe_bounded_string_copy_error {
    SAFE_BOUNDED_STRING_COPY_SUCCESS = 0,
    SAFE_BOUNDED_STRING_COPY_ERR_INVALID_INPUT = -1,
    SAFE_BOUNDED_STRING_COPY_ERR_BUFFER_OVERFLOW = -2,
    SAFE_BOUNDED_STRING_COPY_ERR_CONVERGENCE_FAIL = -3
} safe_bounded_string_copy_error_t;

const char* safe_bounded_string_copy_str_error(safe_bounded_string_copy_error_t code) {
    switch (code) {
        case SAFE_BOUNDED_STRING_COPY_SUCCESS: return "Operation completed successfully";
        case SAFE_BOUNDED_STRING_COPY_ERR_INVALID_INPUT: return "Input argument violates domain preconditions";
        case SAFE_BOUNDED_STRING_COPY_ERR_BUFFER_OVERFLOW: return "Output buffer capacity exceeded";
        case SAFE_BOUNDED_STRING_COPY_ERR_CONVERGENCE_FAIL: return "Numerical algorithm failed to converge within limit";
        default: return "Unrecognized error code";
    }
}
