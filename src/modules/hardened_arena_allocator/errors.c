/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Memory Arena with Randomized Guard Pages and Canaries.
 * Module: hardened_arena_allocator
 */

typedef enum hardened_arena_allocator_error_code {
    HARDENED_ARENA_ALLOCATOR_STATUS_OK = 0,
    HARDENED_ARENA_ALLOCATOR_ERR_NULL_PTR = -10,
    HARDENED_ARENA_ALLOCATOR_ERR_OUT_OF_BOUNDS = -11,
    HARDENED_ARENA_ALLOCATOR_ERR_DIVERGENCE = -12
} hardened_arena_allocator_error_code_t;

const char* hardened_arena_allocator_error_message(hardened_arena_allocator_error_code_t code) {
    switch (code) {
        case HARDENED_ARENA_ALLOCATOR_STATUS_OK: return "Operational success";
        case HARDENED_ARENA_ALLOCATOR_ERR_NULL_PTR: return "Null pointer argument";
        case HARDENED_ARENA_ALLOCATOR_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case HARDENED_ARENA_ALLOCATOR_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
