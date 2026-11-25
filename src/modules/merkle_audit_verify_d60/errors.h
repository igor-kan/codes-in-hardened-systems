#ifndef MERKLE_AUDIT_VERIFY_D60_ERRORS_H
#define MERKLE_AUDIT_VERIFY_D60_ERRORS_H

typedef enum merkle_audit_verify_d60_err {
    MERKLE_AUDIT_VERIFY_D60_OK = 0,
    MERKLE_AUDIT_VERIFY_D60_ERR_NULL = -1,
    MERKLE_AUDIT_VERIFY_D60_ERR_BOUNDS = -2,
    MERKLE_AUDIT_VERIFY_D60_ERR_INVALID = -3,
    MERKLE_AUDIT_VERIFY_D60_ERR_OVERFLOW = -4,
    MERKLE_AUDIT_VERIFY_D60_ERR_INVARIANT = -5
} merkle_audit_verify_d60_err_t;



static inline const char* merkle_audit_verify_d60_err_str(merkle_audit_verify_d60_err_t err) {
    switch (err) {
        case MERKLE_AUDIT_VERIFY_D60_OK: return "ok";
        case MERKLE_AUDIT_VERIFY_D60_ERR_NULL: return "null pointer supplied";
        case MERKLE_AUDIT_VERIFY_D60_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case MERKLE_AUDIT_VERIFY_D60_ERR_INVALID: return "domain precondition violated";
        case MERKLE_AUDIT_VERIFY_D60_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case MERKLE_AUDIT_VERIFY_D60_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* MERKLE_AUDIT_VERIFY_D60_ERRORS_H */
