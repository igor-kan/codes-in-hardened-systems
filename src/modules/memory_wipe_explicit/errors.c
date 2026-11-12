/**
 * @file errors.c
 * @brief Domain diagnostic error codes and messages for Compiler-Safe Explicit Memory Zeroization Routine.
 * Module: memory_wipe_explicit
 */

typedef enum memory_wipe_explicit_error {
    MEMORY_WIPE_EXPLICIT_SUCCESS = 0,
    MEMORY_WIPE_EXPLICIT_ERR_INVALID_INPUT = -1,
    MEMORY_WIPE_EXPLICIT_ERR_BUFFER_OVERFLOW = -2,
    MEMORY_WIPE_EXPLICIT_ERR_CONVERGENCE_FAIL = -3
} memory_wipe_explicit_error_t;

const char* memory_wipe_explicit_str_error(memory_wipe_explicit_error_t code) {
    switch (code) {
        case MEMORY_WIPE_EXPLICIT_SUCCESS: return "Operation completed successfully";
        case MEMORY_WIPE_EXPLICIT_ERR_INVALID_INPUT: return "Input argument violates domain preconditions";
        case MEMORY_WIPE_EXPLICIT_ERR_BUFFER_OVERFLOW: return "Output buffer capacity exceeded";
        case MEMORY_WIPE_EXPLICIT_ERR_CONVERGENCE_FAIL: return "Numerical algorithm failed to converge within limit";
        default: return "Unrecognized error code";
    }
}
