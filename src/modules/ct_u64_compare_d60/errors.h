#ifndef CT_U64_COMPARE_D60_ERRORS_H
#define CT_U64_COMPARE_D60_ERRORS_H

typedef enum ct_u64_compare_d60_err {
    CT_U64_COMPARE_D60_OK = 0,
    CT_U64_COMPARE_D60_ERR_NULL = -1,
    CT_U64_COMPARE_D60_ERR_BOUNDS = -2,
    CT_U64_COMPARE_D60_ERR_INVALID = -3,
    CT_U64_COMPARE_D60_ERR_OVERFLOW = -4,
    CT_U64_COMPARE_D60_ERR_INVARIANT = -5
} ct_u64_compare_d60_err_t;



static inline const char* ct_u64_compare_d60_err_str(ct_u64_compare_d60_err_t err) {
    switch (err) {
        case CT_U64_COMPARE_D60_OK: return "ok";
        case CT_U64_COMPARE_D60_ERR_NULL: return "null pointer supplied";
        case CT_U64_COMPARE_D60_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CT_U64_COMPARE_D60_ERR_INVALID: return "domain precondition violated";
        case CT_U64_COMPARE_D60_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CT_U64_COMPARE_D60_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CT_U64_COMPARE_D60_ERRORS_H */
