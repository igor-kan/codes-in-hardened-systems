#include "interface.h"
privilege_cap_mask_err_t privilege_cap_mask_verify(const cap_cred_t* c) {
    if (!c) return PRIVILEGE_CAP_MASK_ERR_NULL;
    if ((c->effective & ~c->permitted) != 0 || (c->permitted & ~c->bounding) != 0) {
        return PRIVILEGE_CAP_MASK_ERR_INVARIANT;
    }
    return PRIVILEGE_CAP_MASK_OK;
}
