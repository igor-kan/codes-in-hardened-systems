#ifndef CHECKED_SUB_U64_D59_ERRORS_H
#define CHECKED_SUB_U64_D59_ERRORS_H

typedef enum checked_sub_u64_d59_err {
    CHECKED_SUB_U64_D59_OK = 0,
    CHECKED_SUB_U64_D59_ERR_NULL = -1,
    CHECKED_SUB_U64_D59_ERR_BOUNDS = -2,
    CHECKED_SUB_U64_D59_ERR_INVALID = -3,
    CHECKED_SUB_U64_D59_ERR_OVERFLOW = -4,
    CHECKED_SUB_U64_D59_ERR_INVARIANT = -5
} checked_sub_u64_d59_err_t;



static inline const char* checked_sub_u64_d59_err_str(checked_sub_u64_d59_err_t err) {
    switch (err) {
        case CHECKED_SUB_U64_D59_OK: return "ok";
        case CHECKED_SUB_U64_D59_ERR_NULL: return "null pointer supplied";
        case CHECKED_SUB_U64_D59_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_SUB_U64_D59_ERR_INVALID: return "domain precondition violated";
        case CHECKED_SUB_U64_D59_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_SUB_U64_D59_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_SUB_U64_D59_ERRORS_H */
