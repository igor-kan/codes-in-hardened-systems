#ifndef PRIVILEGE_CAP_MASK_ERRORS_H
#define PRIVILEGE_CAP_MASK_ERRORS_H

typedef enum privilege_cap_mask_err {
    PRIVILEGE_CAP_MASK_OK = 0,
    PRIVILEGE_CAP_MASK_ERR_NULL = -1,
    PRIVILEGE_CAP_MASK_ERR_BOUNDS = -2,
    PRIVILEGE_CAP_MASK_ERR_INVALID = -3,
    PRIVILEGE_CAP_MASK_ERR_OVERFLOW = -4,
    PRIVILEGE_CAP_MASK_ERR_INVARIANT = -5
} privilege_cap_mask_err_t;



static inline const char* privilege_cap_mask_err_str(privilege_cap_mask_err_t err) {
    switch (err) {
        case PRIVILEGE_CAP_MASK_OK: return "ok";
        case PRIVILEGE_CAP_MASK_ERR_NULL: return "null pointer supplied";
        case PRIVILEGE_CAP_MASK_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case PRIVILEGE_CAP_MASK_ERR_INVALID: return "domain precondition violated";
        case PRIVILEGE_CAP_MASK_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case PRIVILEGE_CAP_MASK_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* PRIVILEGE_CAP_MASK_ERRORS_H */
