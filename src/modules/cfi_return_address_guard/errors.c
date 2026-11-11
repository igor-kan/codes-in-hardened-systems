/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Hardware/Software Return Address Authentication Guard.
 * Module: cfi_return_address_guard
 */

typedef enum cfi_return_address_guard_error_code {
    CFI_RETURN_ADDRESS_GUARD_STATUS_OK = 0,
    CFI_RETURN_ADDRESS_GUARD_ERR_NULL_PTR = -20,
    CFI_RETURN_ADDRESS_GUARD_ERR_OUT_OF_BOUNDS = -21,
    CFI_RETURN_ADDRESS_GUARD_ERR_DIVERGENCE = -22
} cfi_return_address_guard_error_code_t;

const char* cfi_return_address_guard_error_message(cfi_return_address_guard_error_code_t code) {
    switch (code) {
        case CFI_RETURN_ADDRESS_GUARD_STATUS_OK: return "Operational success";
        case CFI_RETURN_ADDRESS_GUARD_ERR_NULL_PTR: return "Null pointer argument";
        case CFI_RETURN_ADDRESS_GUARD_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case CFI_RETURN_ADDRESS_GUARD_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
