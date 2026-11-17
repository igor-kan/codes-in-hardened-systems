#include "interface.h"

monotonic_nonce_counter_err_t replay_validate_seal(const replay_window_t* rw) {
    if (!rw) return MONOTONIC_NONCE_COUNTER_ERR_NULL;
    if (fast_crc_seal(rw) != rw->crc_seal) return MONOTONIC_NONCE_COUNTER_ERR_INVARIANT;
    return MONOTONIC_NONCE_COUNTER_OK;
}
