#ifndef SIPHASH13_KEYED_COOKIE_ERRORS_H
#define SIPHASH13_KEYED_COOKIE_ERRORS_H

typedef enum siphash13_keyed_cookie_err {
    SIPHASH13_KEYED_COOKIE_OK = 0,
    SIPHASH13_KEYED_COOKIE_ERR_NULL = -1,
    SIPHASH13_KEYED_COOKIE_ERR_BOUNDS = -2,
    SIPHASH13_KEYED_COOKIE_ERR_INVALID = -3,
    SIPHASH13_KEYED_COOKIE_ERR_OVERFLOW = -4,
    SIPHASH13_KEYED_COOKIE_ERR_INVARIANT = -5
} siphash13_keyed_cookie_err_t;



static inline const char* siphash13_keyed_cookie_err_str(siphash13_keyed_cookie_err_t err) {
    switch (err) {
        case SIPHASH13_KEYED_COOKIE_OK: return "ok";
        case SIPHASH13_KEYED_COOKIE_ERR_NULL: return "null pointer supplied";
        case SIPHASH13_KEYED_COOKIE_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SIPHASH13_KEYED_COOKIE_ERR_INVALID: return "domain precondition violated";
        case SIPHASH13_KEYED_COOKIE_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SIPHASH13_KEYED_COOKIE_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SIPHASH13_KEYED_COOKIE_ERRORS_H */
