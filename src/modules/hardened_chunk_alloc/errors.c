/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Chunked Allocator with Randomized Layout and Canaries.
 * Module: hardened_chunk_alloc
 */

typedef enum hardened_chunk_alloc_error_code {
    HARDENED_CHUNK_ALLOC_STATUS_OK = 0,
    HARDENED_CHUNK_ALLOC_ERR_NULL_PTR = -20,
    HARDENED_CHUNK_ALLOC_ERR_OUT_OF_BOUNDS = -21,
    HARDENED_CHUNK_ALLOC_ERR_DIVERGENCE = -22
} hardened_chunk_alloc_error_code_t;

const char* hardened_chunk_alloc_error_message(hardened_chunk_alloc_error_code_t code) {
    switch (code) {
        case HARDENED_CHUNK_ALLOC_STATUS_OK: return "Operational success";
        case HARDENED_CHUNK_ALLOC_ERR_NULL_PTR: return "Null pointer argument";
        case HARDENED_CHUNK_ALLOC_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case HARDENED_CHUNK_ALLOC_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
