#include "interface.h"

strict_cidr_acl_matcher_err_t strict_cidr_acl_matcher_verify_guard(bool cond) {
    if (!cond) {
        return STRICT_CIDR_ACL_MATCHER_ERR_INVARIANT;
    }
    return STRICT_CIDR_ACL_MATCHER_OK;
}
