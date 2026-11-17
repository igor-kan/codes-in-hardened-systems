#include "interface.h"

monotonic_nonce_counter_err_t verify_anti_replay_contract(void) {
    replay_window_t rw;
    replay_init(&rw, 7U);
    if (replay_accept(&rw, 100ULL) != MONOTONIC_NONCE_COUNTER_OK) return MONOTONIC_NONCE_COUNTER_ERR_INVARIANT;
    if (replay_accept(&rw, 95ULL) != MONOTONIC_NONCE_COUNTER_OK) return MONOTONIC_NONCE_COUNTER_ERR_INVARIANT;
    if (replay_accept(&rw, 95ULL) == MONOTONIC_NONCE_COUNTER_OK) return MONOTONIC_NONCE_COUNTER_ERR_INVARIANT;
    if (replay_accept(&rw, 10ULL) == MONOTONIC_NONCE_COUNTER_OK) return MONOTONIC_NONCE_COUNTER_ERR_INVARIANT;
    return MONOTONIC_NONCE_COUNTER_OK;
}
