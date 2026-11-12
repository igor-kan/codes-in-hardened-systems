/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Branchless Constant-Time Memory Buffer Comparison.
 * Module: constant_time_compare
 */

typedef enum constant_time_compare_error {
    CONSTANT_TIME_COMPARE_SUCCESS = 0,
    CONSTANT_TIME_COMPARE_ERR_INVALID_INPUT = -1,
    CONSTANT_TIME_COMPARE_ERR_BUFFER_OVERFLOW = -2,
    CONSTANT_TIME_COMPARE_ERR_CONVERGENCE_FAIL = -3
} constant_time_compare_error_t;

const char* constant_time_compare_str_error(constant_time_compare_error_t code) {
    switch (code) {
        case CONSTANT_TIME_COMPARE_SUCCESS: return "Operation completed successfully";
        case CONSTANT_TIME_COMPARE_ERR_INVALID_INPUT: return "Input argument violates domain preconditions";
        case CONSTANT_TIME_COMPARE_ERR_BUFFER_OVERFLOW: return "Output buffer capacity exceeded";
        case CONSTANT_TIME_COMPARE_ERR_CONVERGENCE_FAIL: return "Numerical algorithm failed to converge within limit";
        default: return "Unrecognized error code";
    }
}
