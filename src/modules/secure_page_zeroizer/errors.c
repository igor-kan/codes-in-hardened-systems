/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Hardware-Accelerated Memory Zeroization with Cache Flush.
 * Module: secure_page_zeroizer
 */

typedef enum secure_page_zeroizer_error_code {
    SECURE_PAGE_ZEROIZER_STATUS_OK = 0,
    SECURE_PAGE_ZEROIZER_ERR_NULL_PTR = -20,
    SECURE_PAGE_ZEROIZER_ERR_OUT_OF_BOUNDS = -21,
    SECURE_PAGE_ZEROIZER_ERR_DIVERGENCE = -22
} secure_page_zeroizer_error_code_t;

const char* secure_page_zeroizer_error_message(secure_page_zeroizer_error_code_t code) {
    switch (code) {
        case SECURE_PAGE_ZEROIZER_STATUS_OK: return "Operational success";
        case SECURE_PAGE_ZEROIZER_ERR_NULL_PTR: return "Null pointer argument";
        case SECURE_PAGE_ZEROIZER_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case SECURE_PAGE_ZEROIZER_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
