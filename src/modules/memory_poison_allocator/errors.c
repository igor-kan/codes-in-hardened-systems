/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Hardened Allocator with Memory Poisoning Guards.
 * Module: memory_poison_allocator
 */

typedef enum memory_poison_allocator_error {
    MEMORY_POISON_ALLOCATOR_OK = 0,
    MEMORY_POISON_ALLOCATOR_ERR_NULL = -100,
    MEMORY_POISON_ALLOCATOR_ERR_CAPACITY = -101,
    MEMORY_POISON_ALLOCATOR_ERR_CONVERGENCE = -102
} memory_poison_allocator_error_t;

const char* memory_poison_allocator_strerror(memory_poison_allocator_error_t err) {
    switch (err) {
        case MEMORY_POISON_ALLOCATOR_OK: return "Success";
        case MEMORY_POISON_ALLOCATOR_ERR_NULL: return "Encountered null pointer argument";
        case MEMORY_POISON_ALLOCATOR_ERR_CAPACITY: return "Capacity limit exceeded";
        case MEMORY_POISON_ALLOCATOR_ERR_CONVERGENCE: return "Numerical algorithm failed to converge";
        default: return "Unknown error";
    }
}
