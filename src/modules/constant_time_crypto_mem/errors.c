/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Constant-Time Memory Scrub Swap and Equality Verifier.
 * Module: constant_time_crypto_mem
 */

typedef enum constant_time_crypto_mem_error_code {
    CONSTANT_TIME_CRYPTO_MEM_STATUS_OK = 0,
    CONSTANT_TIME_CRYPTO_MEM_ERR_NULL_PTR = -10,
    CONSTANT_TIME_CRYPTO_MEM_ERR_OUT_OF_BOUNDS = -11,
    CONSTANT_TIME_CRYPTO_MEM_ERR_DIVERGENCE = -12
} constant_time_crypto_mem_error_code_t;

const char* constant_time_crypto_mem_error_message(constant_time_crypto_mem_error_code_t code) {
    switch (code) {
        case CONSTANT_TIME_CRYPTO_MEM_STATUS_OK: return "Operational success";
        case CONSTANT_TIME_CRYPTO_MEM_ERR_NULL_PTR: return "Null pointer argument";
        case CONSTANT_TIME_CRYPTO_MEM_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case CONSTANT_TIME_CRYPTO_MEM_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
