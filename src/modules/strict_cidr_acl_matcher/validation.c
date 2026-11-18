#include "interface.h"

strict_cidr_acl_matcher_err_t strict_cidr_acl_matcher_validate_len(size_t n) {
    if (n == 0) {
        return STRICT_CIDR_ACL_MATCHER_ERR_INVALID;
    }
    return STRICT_CIDR_ACL_MATCHER_OK;
}
