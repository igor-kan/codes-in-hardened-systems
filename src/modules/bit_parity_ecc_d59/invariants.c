#include "interface.h"

bit_parity_ecc_d59_err_t bit_parity_ecc_d59_verify_guard(bool cond) {
    if (!cond) {
        return BIT_PARITY_ECC_D59_ERR_INVARIANT;
    }
    return BIT_PARITY_ECC_D59_OK;
}
