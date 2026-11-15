#include "interface.h"
#include <assert.h>

int main(void) {
    cap_cred_t c;
    assert(privilege_cap_mask_init(&c, 0xFFFFULL) == PRIVILEGE_CAP_MASK_OK);
    for (int i = 0; i < 16; ++i) {
        assert(privilege_cap_mask_drop_bound(&c, (1ULL << i)) == PRIVILEGE_CAP_MASK_OK);
        assert(privilege_cap_mask_verify(&c) == PRIVILEGE_CAP_MASK_OK);
    }
    assert(c.bounding == 0 && c.permitted == 0 && c.effective == 0);
    return 0;
}
