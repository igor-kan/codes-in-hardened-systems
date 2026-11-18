#ifndef STRICT_CIDR_ACL_MATCHER_INTERFACE_H
#define STRICT_CIDR_ACL_MATCHER_INTERFACE_H

#include "types.h"
#include "errors.h"

uint32_t cidr_mask_safe(uint8_t prefix_len);
bool cidr_acl_evaluate(const cidr_rule_t* rules, size_t n, uint32_t ip, bool default_allow);

strict_cidr_acl_matcher_err_t strict_cidr_acl_matcher_validate_len(size_t n);
uint64_t strict_cidr_acl_matcher_fast_fold_u64(const uint64_t* xs, size_t n);
uint64_t strict_cidr_acl_matcher_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb);
strict_cidr_acl_matcher_err_t strict_cidr_acl_matcher_verify_guard(bool cond);

#endif /* STRICT_CIDR_ACL_MATCHER_INTERFACE_H */
