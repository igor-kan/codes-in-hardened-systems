#include "interface.h"

bit_parity_ecc_d59_err_t bit_parity_ecc_d59_validate_len(size_t n) {
    if (n == 0) {
        return BIT_PARITY_ECC_D59_ERR_INVALID;
    }
    return BIT_PARITY_ECC_D59_OK;
}
