#ifndef PRIVILEGE_CAP_MASK_INTERFACE_H
#define PRIVILEGE_CAP_MASK_INTERFACE_H

#include "types.h"
#include "errors.h"

privilege_cap_mask_err_t privilege_cap_mask_init(cap_cred_t* c, uint64_t initial_caps);
privilege_cap_mask_err_t privilege_cap_mask_drop_bound(cap_cred_t* c, uint64_t drop_mask);
privilege_cap_mask_err_t privilege_cap_mask_set_effective(cap_cred_t* c, uint64_t req_eff);
privilege_cap_mask_err_t privilege_cap_mask_verify(const cap_cred_t* c);
bool privilege_cap_mask_has_effective(const cap_cred_t* c, uint64_t cap);

#endif /* PRIVILEGE_CAP_MASK_INTERFACE_H */
