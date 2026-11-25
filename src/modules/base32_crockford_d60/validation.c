#include "interface.h"

base32_crockford_d60_err_t base32_crockford_d60_validate_len(size_t n) {
    if (n == 0) {
        return BASE32_CROCKFORD_D60_ERR_INVALID;
    }
    return BASE32_CROCKFORD_D60_OK;
}
