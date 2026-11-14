/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Saturating and Checked 64-Bit Arithmetic Operations.
 * Module: integer_saturating_arithmetic
 */

typedef enum integer_saturating_arithmetic_error_status {
    INTEGER_SATURATING_ARITHMETIC_OK = 0,
    INTEGER_SATURATING_ARITHMETIC_ERR_INVALID_PARAM = -10,
    INTEGER_SATURATING_ARITHMETIC_ERR_CAPACITY_LIMIT = -11,
    INTEGER_SATURATING_ARITHMETIC_ERR_NUMERICAL_FAULT = -12
} integer_saturating_arithmetic_error_status_t;

const char* integer_saturating_arithmetic_error_string(integer_saturating_arithmetic_error_status_t err) {
    switch (err) {
        case INTEGER_SATURATING_ARITHMETIC_OK: return "Operational success";
        case INTEGER_SATURATING_ARITHMETIC_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case INTEGER_SATURATING_ARITHMETIC_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case INTEGER_SATURATING_ARITHMETIC_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
