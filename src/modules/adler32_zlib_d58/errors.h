#ifndef ADLER32_ZLIB_D58_ERRORS_H
#define ADLER32_ZLIB_D58_ERRORS_H

typedef enum adler32_zlib_d58_err {
    ADLER32_ZLIB_D58_OK = 0,
    ADLER32_ZLIB_D58_ERR_NULL = -1,
    ADLER32_ZLIB_D58_ERR_BOUNDS = -2,
    ADLER32_ZLIB_D58_ERR_INVALID = -3,
    ADLER32_ZLIB_D58_ERR_OVERFLOW = -4,
    ADLER32_ZLIB_D58_ERR_INVARIANT = -5
} adler32_zlib_d58_err_t;



static inline const char* adler32_zlib_d58_err_str(adler32_zlib_d58_err_t err) {
    switch (err) {
        case ADLER32_ZLIB_D58_OK: return "ok";
        case ADLER32_ZLIB_D58_ERR_NULL: return "null pointer supplied";
        case ADLER32_ZLIB_D58_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case ADLER32_ZLIB_D58_ERR_INVALID: return "domain precondition violated";
        case ADLER32_ZLIB_D58_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case ADLER32_ZLIB_D58_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* ADLER32_ZLIB_D58_ERRORS_H */
