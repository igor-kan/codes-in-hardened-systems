#include "interface.h"
#include <math.h>
#include <string.h>

uint32_t cidr_mask_safe(uint8_t prefix_len) {
    if (prefix_len == 0) return 0U;
    if (prefix_len >= 32) return 0xffffffffU;
    return ~((1U << (32U - prefix_len)) - 1U);
}
bool cidr_acl_evaluate(const cidr_rule_t* rules, size_t n, uint32_t ip, bool default_allow) {
    int best_len = -1;
    bool decision = default_allow;
    for (size_t i = 0; i < n; ++i) {
        uint32_t m = cidr_mask_safe(rules[i].prefix_len);
        if ((ip & m) == (rules[i].net & m) && (int)rules[i].prefix_len > best_len) {
            best_len = (int)rules[i].prefix_len;
            decision = rules[i].allow;
        }
    }
    return decision;
}
