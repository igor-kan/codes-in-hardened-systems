#include "interface.h"

base32_crockford_d60_err_t base32_crockford_d60_verify_guard(bool cond) {
    if (!cond) {
        return BASE32_CROCKFORD_D60_ERR_INVARIANT;
    }
    return BASE32_CROCKFORD_D60_OK;
}
