#include "interface.h"
privilege_cap_mask_err_t privilege_cap_mask_validate_subset(uint64_t sub, uint64_t sup) {
    if ((sub & ~sup) != 0) return PRIVILEGE_CAP_MASK_ERR_INVALID;
    return PRIVILEGE_CAP_MASK_OK;
}
