#ifndef CHECKED_FIXEDPOINT_Q16_ERRORS_H
#define CHECKED_FIXEDPOINT_Q16_ERRORS_H

typedef enum checked_fixedpoint_q16_err {
    CHECKED_FIXEDPOINT_Q16_OK = 0,
    CHECKED_FIXEDPOINT_Q16_ERR_NULL = -1,
    CHECKED_FIXEDPOINT_Q16_ERR_BOUNDS = -2,
    CHECKED_FIXEDPOINT_Q16_ERR_INVALID = -3,
    CHECKED_FIXEDPOINT_Q16_ERR_OVERFLOW = -4,
    CHECKED_FIXEDPOINT_Q16_ERR_INVARIANT = -5
} checked_fixedpoint_q16_err_t;



static inline const char* checked_fixedpoint_q16_err_str(checked_fixedpoint_q16_err_t err) {
    switch (err) {
        case CHECKED_FIXEDPOINT_Q16_OK: return "ok";
        case CHECKED_FIXEDPOINT_Q16_ERR_NULL: return "null pointer supplied";
        case CHECKED_FIXEDPOINT_Q16_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_FIXEDPOINT_Q16_ERR_INVALID: return "domain precondition violated";
        case CHECKED_FIXEDPOINT_Q16_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_FIXEDPOINT_Q16_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_FIXEDPOINT_Q16_ERRORS_H */
