#include "interface.h"
#include <assert.h>

int main(void) {
    assert(q16_verify_identities() == CHECKED_FIXEDPOINT_Q16_OK);
    q16_t q = 0;
    assert(q16_div_checked(9 << 16, 2 << 16, &q) == CHECKED_FIXEDPOINT_Q16_OK);
    assert(q == ((4 << 16) + (1 << 15)));
    return 0;
}
