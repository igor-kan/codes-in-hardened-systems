#ifndef FLETCHER32_DUAL_ACC_D56_ERRORS_H
#define FLETCHER32_DUAL_ACC_D56_ERRORS_H

typedef enum fletcher32_dual_acc_d56_err {
    FLETCHER32_DUAL_ACC_D56_OK = 0,
    FLETCHER32_DUAL_ACC_D56_ERR_NULL = -1,
    FLETCHER32_DUAL_ACC_D56_ERR_BOUNDS = -2,
    FLETCHER32_DUAL_ACC_D56_ERR_INVALID = -3,
    FLETCHER32_DUAL_ACC_D56_ERR_OVERFLOW = -4,
    FLETCHER32_DUAL_ACC_D56_ERR_INVARIANT = -5
} fletcher32_dual_acc_d56_err_t;



static inline const char* fletcher32_dual_acc_d56_err_str(fletcher32_dual_acc_d56_err_t err) {
    switch (err) {
        case FLETCHER32_DUAL_ACC_D56_OK: return "ok";
        case FLETCHER32_DUAL_ACC_D56_ERR_NULL: return "null pointer supplied";
        case FLETCHER32_DUAL_ACC_D56_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case FLETCHER32_DUAL_ACC_D56_ERR_INVALID: return "domain precondition violated";
        case FLETCHER32_DUAL_ACC_D56_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case FLETCHER32_DUAL_ACC_D56_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* FLETCHER32_DUAL_ACC_D56_ERRORS_H */
