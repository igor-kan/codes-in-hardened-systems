/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

typedef enum aslr_entropy_validator_error {
    ASLR_ENTROPY_VALIDATOR_OK = 0,
    ASLR_ENTROPY_VALIDATOR_ERR_NULL = -100,
    ASLR_ENTROPY_VALIDATOR_ERR_CAPACITY = -101,
    ASLR_ENTROPY_VALIDATOR_ERR_CONVERGENCE = -102
} aslr_entropy_validator_error_t;

const char* aslr_entropy_validator_strerror(aslr_entropy_validator_error_t err) {
    switch (err) {
        case ASLR_ENTROPY_VALIDATOR_OK: return "Success";
        case ASLR_ENTROPY_VALIDATOR_ERR_NULL: return "Encountered null pointer argument";
        case ASLR_ENTROPY_VALIDATOR_ERR_CAPACITY: return "Capacity limit exceeded";
        case ASLR_ENTROPY_VALIDATOR_ERR_CONVERGENCE: return "Numerical algorithm failed to converge";
        default: return "Unknown error";
    }
}
