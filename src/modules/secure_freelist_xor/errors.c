/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for XOR-Protected Heap Chunk Metadata against Double-Free.
 * Module: secure_freelist_xor
 */

typedef enum secure_freelist_xor_error_status {
    SECURE_FREELIST_XOR_OK = 0,
    SECURE_FREELIST_XOR_ERR_INVALID_PARAM = -10,
    SECURE_FREELIST_XOR_ERR_CAPACITY_LIMIT = -11,
    SECURE_FREELIST_XOR_ERR_NUMERICAL_FAULT = -12
} secure_freelist_xor_error_status_t;

const char* secure_freelist_xor_error_string(secure_freelist_xor_error_status_t err) {
    switch (err) {
        case SECURE_FREELIST_XOR_OK: return "Operational success";
        case SECURE_FREELIST_XOR_ERR_INVALID_PARAM: return "Parameter domain precondition violated";
        case SECURE_FREELIST_XOR_ERR_CAPACITY_LIMIT: return "Buffer capacity boundary reached";
        case SECURE_FREELIST_XOR_ERR_NUMERICAL_FAULT: return "Numerical computation anomaly";
        default: return "Unknown module error code";
    }
}
