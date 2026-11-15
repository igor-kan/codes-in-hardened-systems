#ifndef SAFE_SNPRINTF_WRITER_ERRORS_H
#define SAFE_SNPRINTF_WRITER_ERRORS_H

typedef enum safe_snprintf_writer_err {
    SAFE_SNPRINTF_WRITER_OK = 0,
    SAFE_SNPRINTF_WRITER_ERR_NULL = -1,
    SAFE_SNPRINTF_WRITER_ERR_BOUNDS = -2,
    SAFE_SNPRINTF_WRITER_ERR_INVALID = -3,
    SAFE_SNPRINTF_WRITER_ERR_OVERFLOW = -4,
    SAFE_SNPRINTF_WRITER_ERR_INVARIANT = -5
} safe_snprintf_writer_err_t;



static inline const char* safe_snprintf_writer_err_str(safe_snprintf_writer_err_t err) {
    switch (err) {
        case SAFE_SNPRINTF_WRITER_OK: return "ok";
        case SAFE_SNPRINTF_WRITER_ERR_NULL: return "null pointer supplied";
        case SAFE_SNPRINTF_WRITER_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SAFE_SNPRINTF_WRITER_ERR_INVALID: return "domain precondition violated";
        case SAFE_SNPRINTF_WRITER_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SAFE_SNPRINTF_WRITER_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SAFE_SNPRINTF_WRITER_ERRORS_H */
