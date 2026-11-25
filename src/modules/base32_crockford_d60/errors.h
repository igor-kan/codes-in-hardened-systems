#ifndef BASE32_CROCKFORD_D60_ERRORS_H
#define BASE32_CROCKFORD_D60_ERRORS_H

typedef enum base32_crockford_d60_err {
    BASE32_CROCKFORD_D60_OK = 0,
    BASE32_CROCKFORD_D60_ERR_NULL = -1,
    BASE32_CROCKFORD_D60_ERR_BOUNDS = -2,
    BASE32_CROCKFORD_D60_ERR_INVALID = -3,
    BASE32_CROCKFORD_D60_ERR_OVERFLOW = -4,
    BASE32_CROCKFORD_D60_ERR_INVARIANT = -5
} base32_crockford_d60_err_t;



static inline const char* base32_crockford_d60_err_str(base32_crockford_d60_err_t err) {
    switch (err) {
        case BASE32_CROCKFORD_D60_OK: return "ok";
        case BASE32_CROCKFORD_D60_ERR_NULL: return "null pointer supplied";
        case BASE32_CROCKFORD_D60_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case BASE32_CROCKFORD_D60_ERR_INVALID: return "domain precondition violated";
        case BASE32_CROCKFORD_D60_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case BASE32_CROCKFORD_D60_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* BASE32_CROCKFORD_D60_ERRORS_H */
