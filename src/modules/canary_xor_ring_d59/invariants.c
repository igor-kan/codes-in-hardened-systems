#include "interface.h"

canary_xor_ring_d59_err_t canary_xor_ring_d59_verify_guard(bool cond) {
    if (!cond) {
        return CANARY_XOR_RING_D59_ERR_INVARIANT;
    }
    return CANARY_XOR_RING_D59_OK;
}
