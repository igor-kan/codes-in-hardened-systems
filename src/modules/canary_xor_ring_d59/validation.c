#include "interface.h"

canary_xor_ring_d59_err_t canary_xor_ring_d59_validate_len(size_t n) {
    if (n == 0) {
        return CANARY_XOR_RING_D59_ERR_INVALID;
    }
    return CANARY_XOR_RING_D59_OK;
}
