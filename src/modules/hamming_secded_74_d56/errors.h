#ifndef HAMMING_SECDED_74_D56_ERRORS_H
#define HAMMING_SECDED_74_D56_ERRORS_H

typedef enum hamming_secded_74_d56_err {
    HAMMING_SECDED_74_D56_OK = 0,
    HAMMING_SECDED_74_D56_ERR_NULL = -1,
    HAMMING_SECDED_74_D56_ERR_BOUNDS = -2,
    HAMMING_SECDED_74_D56_ERR_INVALID = -3,
    HAMMING_SECDED_74_D56_ERR_OVERFLOW = -4,
    HAMMING_SECDED_74_D56_ERR_INVARIANT = -5
} hamming_secded_74_d56_err_t;



static inline const char* hamming_secded_74_d56_err_str(hamming_secded_74_d56_err_t err) {
    switch (err) {
        case HAMMING_SECDED_74_D56_OK: return "ok";
        case HAMMING_SECDED_74_D56_ERR_NULL: return "null pointer supplied";
        case HAMMING_SECDED_74_D56_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case HAMMING_SECDED_74_D56_ERR_INVALID: return "domain precondition violated";
        case HAMMING_SECDED_74_D56_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case HAMMING_SECDED_74_D56_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* HAMMING_SECDED_74_D56_ERRORS_H */
