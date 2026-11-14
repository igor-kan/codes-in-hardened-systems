/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for XOR-Cookie Encrypted Metadata Protection for Freelist.
 * Module: heap_cookie_protection
 */

typedef enum heap_cookie_protection_error_status {
    HEAP_COOKIE_PROTECTION_OK = 0,
    HEAP_COOKIE_PROTECTION_ERR_INVALID_PARAM = -10,
    HEAP_COOKIE_PROTECTION_ERR_CAPACITY_LIMIT = -11,
    HEAP_COOKIE_PROTECTION_ERR_NUMERICAL_FAULT = -12
} heap_cookie_protection_error_status_t;

const char* heap_cookie_protection_error_string(heap_cookie_protection_error_status_t err) {
    switch (err) {
        case HEAP_COOKIE_PROTECTION_OK: return "Operational success";
        case HEAP_COOKIE_PROTECTION_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case HEAP_COOKIE_PROTECTION_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case HEAP_COOKIE_PROTECTION_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
