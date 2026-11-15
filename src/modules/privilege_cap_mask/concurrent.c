#include "interface.h"
privilege_cap_mask_err_t privilege_cap_mask_lock_caps(cap_cred_t* c) {
    if (!c) return PRIVILEGE_CAP_MASK_ERR_NULL;
    c->locked = true;
    c->permitted = c->effective;
    return PRIVILEGE_CAP_MASK_OK;
}
