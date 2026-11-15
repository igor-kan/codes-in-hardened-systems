#include "interface.h"

privilege_cap_mask_err_t privilege_cap_mask_init(cap_cred_t* c, uint64_t initial_caps) {
    if (!c) return PRIVILEGE_CAP_MASK_ERR_NULL;
    c->bounding = initial_caps;
    c->permitted = initial_caps;
    c->effective = 0; // Start with minimal ambient effective capabilities
    c->locked = false;
    return PRIVILEGE_CAP_MASK_OK;
}

privilege_cap_mask_err_t privilege_cap_mask_drop_bound(cap_cred_t* c, uint64_t drop_mask) {
    if (!c) return PRIVILEGE_CAP_MASK_ERR_NULL;
    uint64_t next_b = c->bounding & ~drop_mask;
    c->bounding = next_b;
    c->permitted &= next_b;
    c->effective &= next_b;
    return PRIVILEGE_CAP_MASK_OK;
}

privilege_cap_mask_err_t privilege_cap_mask_set_effective(cap_cred_t* c, uint64_t req_eff) {
    if (!c) return PRIVILEGE_CAP_MASK_ERR_NULL;
    if ((req_eff & ~c->permitted) != 0 || (req_eff & ~c->bounding) != 0) {
        return PRIVILEGE_CAP_MASK_ERR_INVALID; // Escalation denied
    }
    if (c->locked && (req_eff & ~c->effective) != 0) {
        return PRIVILEGE_CAP_MASK_ERR_INVALID; // Cannot re-enable after lock
    }
    c->effective = req_eff;
    return PRIVILEGE_CAP_MASK_OK;
}

bool privilege_cap_mask_has_effective(const cap_cred_t* c, uint64_t cap) {
    return c && ((c->effective & cap) == cap) && (privilege_cap_mask_verify(c) == PRIVILEGE_CAP_MASK_OK);
}
