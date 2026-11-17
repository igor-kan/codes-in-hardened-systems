#ifndef AUDIT_LOG_HASH_CHAIN_ERRORS_H
#define AUDIT_LOG_HASH_CHAIN_ERRORS_H

typedef enum audit_log_hash_chain_err {
    AUDIT_LOG_HASH_CHAIN_OK = 0,
    AUDIT_LOG_HASH_CHAIN_ERR_NULL = -1,
    AUDIT_LOG_HASH_CHAIN_ERR_BOUNDS = -2,
    AUDIT_LOG_HASH_CHAIN_ERR_INVALID = -3,
    AUDIT_LOG_HASH_CHAIN_ERR_OVERFLOW = -4,
    AUDIT_LOG_HASH_CHAIN_ERR_INVARIANT = -5
} audit_log_hash_chain_err_t;



static inline const char* audit_log_hash_chain_err_str(audit_log_hash_chain_err_t err) {
    switch (err) {
        case AUDIT_LOG_HASH_CHAIN_OK: return "ok";
        case AUDIT_LOG_HASH_CHAIN_ERR_NULL: return "null pointer supplied";
        case AUDIT_LOG_HASH_CHAIN_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case AUDIT_LOG_HASH_CHAIN_ERR_INVALID: return "domain precondition violated";
        case AUDIT_LOG_HASH_CHAIN_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case AUDIT_LOG_HASH_CHAIN_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* AUDIT_LOG_HASH_CHAIN_ERRORS_H */
