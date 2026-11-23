#ifndef CHECKED_DIV_MOD_D58_ERRORS_H
#define CHECKED_DIV_MOD_D58_ERRORS_H

typedef enum checked_div_mod_d58_err {
    CHECKED_DIV_MOD_D58_OK = 0,
    CHECKED_DIV_MOD_D58_ERR_NULL = -1,
    CHECKED_DIV_MOD_D58_ERR_BOUNDS = -2,
    CHECKED_DIV_MOD_D58_ERR_INVALID = -3,
    CHECKED_DIV_MOD_D58_ERR_OVERFLOW = -4,
    CHECKED_DIV_MOD_D58_ERR_INVARIANT = -5
} checked_div_mod_d58_err_t;



static inline const char* checked_div_mod_d58_err_str(checked_div_mod_d58_err_t err) {
    switch (err) {
        case CHECKED_DIV_MOD_D58_OK: return "ok";
        case CHECKED_DIV_MOD_D58_ERR_NULL: return "null pointer supplied";
        case CHECKED_DIV_MOD_D58_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_DIV_MOD_D58_ERR_INVALID: return "domain precondition violated";
        case CHECKED_DIV_MOD_D58_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_DIV_MOD_D58_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_DIV_MOD_D58_ERRORS_H */
