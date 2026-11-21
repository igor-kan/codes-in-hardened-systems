#ifndef CONSTANT_TIME_CT_SELECT_D56_ERRORS_H
#define CONSTANT_TIME_CT_SELECT_D56_ERRORS_H

typedef enum constant_time_ct_select_d56_err {
    CONSTANT_TIME_CT_SELECT_D56_OK = 0,
    CONSTANT_TIME_CT_SELECT_D56_ERR_NULL = -1,
    CONSTANT_TIME_CT_SELECT_D56_ERR_BOUNDS = -2,
    CONSTANT_TIME_CT_SELECT_D56_ERR_INVALID = -3,
    CONSTANT_TIME_CT_SELECT_D56_ERR_OVERFLOW = -4,
    CONSTANT_TIME_CT_SELECT_D56_ERR_INVARIANT = -5
} constant_time_ct_select_d56_err_t;



static inline const char* constant_time_ct_select_d56_err_str(constant_time_ct_select_d56_err_t err) {
    switch (err) {
        case CONSTANT_TIME_CT_SELECT_D56_OK: return "ok";
        case CONSTANT_TIME_CT_SELECT_D56_ERR_NULL: return "null pointer supplied";
        case CONSTANT_TIME_CT_SELECT_D56_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CONSTANT_TIME_CT_SELECT_D56_ERR_INVALID: return "domain precondition violated";
        case CONSTANT_TIME_CT_SELECT_D56_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CONSTANT_TIME_CT_SELECT_D56_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CONSTANT_TIME_CT_SELECT_D56_ERRORS_H */
