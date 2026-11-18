#ifndef STRICT_CIDR_ACL_MATCHER_ERRORS_H
#define STRICT_CIDR_ACL_MATCHER_ERRORS_H

typedef enum strict_cidr_acl_matcher_err {
    STRICT_CIDR_ACL_MATCHER_OK = 0,
    STRICT_CIDR_ACL_MATCHER_ERR_NULL = -1,
    STRICT_CIDR_ACL_MATCHER_ERR_BOUNDS = -2,
    STRICT_CIDR_ACL_MATCHER_ERR_INVALID = -3,
    STRICT_CIDR_ACL_MATCHER_ERR_OVERFLOW = -4,
    STRICT_CIDR_ACL_MATCHER_ERR_INVARIANT = -5
} strict_cidr_acl_matcher_err_t;



static inline const char* strict_cidr_acl_matcher_err_str(strict_cidr_acl_matcher_err_t err) {
    switch (err) {
        case STRICT_CIDR_ACL_MATCHER_OK: return "ok";
        case STRICT_CIDR_ACL_MATCHER_ERR_NULL: return "null pointer supplied";
        case STRICT_CIDR_ACL_MATCHER_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case STRICT_CIDR_ACL_MATCHER_ERR_INVALID: return "domain precondition violated";
        case STRICT_CIDR_ACL_MATCHER_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case STRICT_CIDR_ACL_MATCHER_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* STRICT_CIDR_ACL_MATCHER_ERRORS_H */
