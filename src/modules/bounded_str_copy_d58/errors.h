#ifndef BOUNDED_STR_COPY_D58_ERRORS_H
#define BOUNDED_STR_COPY_D58_ERRORS_H

typedef enum bounded_str_copy_d58_err {
    BOUNDED_STR_COPY_D58_OK = 0,
    BOUNDED_STR_COPY_D58_ERR_NULL = -1,
    BOUNDED_STR_COPY_D58_ERR_BOUNDS = -2,
    BOUNDED_STR_COPY_D58_ERR_INVALID = -3,
    BOUNDED_STR_COPY_D58_ERR_OVERFLOW = -4,
    BOUNDED_STR_COPY_D58_ERR_INVARIANT = -5
} bounded_str_copy_d58_err_t;



static inline const char* bounded_str_copy_d58_err_str(bounded_str_copy_d58_err_t err) {
    switch (err) {
        case BOUNDED_STR_COPY_D58_OK: return "ok";
        case BOUNDED_STR_COPY_D58_ERR_NULL: return "null pointer supplied";
        case BOUNDED_STR_COPY_D58_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case BOUNDED_STR_COPY_D58_ERR_INVALID: return "domain precondition violated";
        case BOUNDED_STR_COPY_D58_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case BOUNDED_STR_COPY_D58_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* BOUNDED_STR_COPY_D58_ERRORS_H */
