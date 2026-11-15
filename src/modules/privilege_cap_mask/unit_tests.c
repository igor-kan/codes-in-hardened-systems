#include "interface.h"
#include <assert.h>

int main(void) {
    cap_cred_t c;
    assert(privilege_cap_mask_init(&c, CAP_NET_BIND | CAP_DAC_READ) == PRIVILEGE_CAP_MASK_OK);
    assert(privilege_cap_mask_set_effective(&c, CAP_NET_BIND) == PRIVILEGE_CAP_MASK_OK);
    assert(privilege_cap_mask_has_effective(&c, CAP_NET_BIND));
    // Attempt unauthorized CAP_SYS_ADMIN escalation -> denied!
    assert(privilege_cap_mask_set_effective(&c, CAP_SYS_ADMIN) == PRIVILEGE_CAP_MASK_ERR_INVALID);
    assert(privilege_cap_mask_drop_bound(&c, CAP_NET_BIND) == PRIVILEGE_CAP_MASK_OK);
    assert(!privilege_cap_mask_has_effective(&c, CAP_NET_BIND));
    return 0;
}
