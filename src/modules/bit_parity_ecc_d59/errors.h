#ifndef BIT_PARITY_ECC_D59_ERRORS_H
#define BIT_PARITY_ECC_D59_ERRORS_H

typedef enum bit_parity_ecc_d59_err {
    BIT_PARITY_ECC_D59_OK = 0,
    BIT_PARITY_ECC_D59_ERR_NULL = -1,
    BIT_PARITY_ECC_D59_ERR_BOUNDS = -2,
    BIT_PARITY_ECC_D59_ERR_INVALID = -3,
    BIT_PARITY_ECC_D59_ERR_OVERFLOW = -4,
    BIT_PARITY_ECC_D59_ERR_INVARIANT = -5
} bit_parity_ecc_d59_err_t;



static inline const char* bit_parity_ecc_d59_err_str(bit_parity_ecc_d59_err_t err) {
    switch (err) {
        case BIT_PARITY_ECC_D59_OK: return "ok";
        case BIT_PARITY_ECC_D59_ERR_NULL: return "null pointer supplied";
        case BIT_PARITY_ECC_D59_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case BIT_PARITY_ECC_D59_ERR_INVALID: return "domain precondition violated";
        case BIT_PARITY_ECC_D59_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case BIT_PARITY_ECC_D59_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* BIT_PARITY_ECC_D59_ERRORS_H */
