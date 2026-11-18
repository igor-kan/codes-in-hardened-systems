#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(strict_cidr_acl_matcher_validate_len(1) == STRICT_CIDR_ACL_MATCHER_OK);
    cidr_rule_t rules[3] = {
        {0x00000000U, 0, false},
        {0x0a000000U, 8, true},
        {0x0a010200U, 24, false}
    };
    assert(cidr_acl_evaluate(rules, 3, 0x0a050101U, false));
    assert(!cidr_acl_evaluate(rules, 3, 0x0a010209U, true));
    assert(!cidr_acl_evaluate(rules, 3, 0x08080808U, true));
    assert(strict_cidr_acl_matcher_verify_guard(true) == STRICT_CIDR_ACL_MATCHER_OK);
    return 0;
}
