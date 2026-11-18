#ifndef STRICT_CIDR_ACL_MATCHER_TYPES_H
#define STRICT_CIDR_ACL_MATCHER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint32_t net;
    uint8_t prefix_len;
    bool allow;
} cidr_rule_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} strict_cidr_acl_matcher_meta_t;

#endif /* STRICT_CIDR_ACL_MATCHER_TYPES_H */
