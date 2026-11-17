#include "interface.h"
#include <assert.h>

int main(void) {
    replay_window_t rw;
    replay_init(&rw, 1U);
    for (uint64_t s = 50; s < 80; ++s) assert(replay_accept(&rw, s) == MONOTONIC_NONCE_COUNTER_OK);
    uint64_t probes[4] = {10, 79, 80, 100};
    int ok[4] = {0};
    parallel_epoch_checks(&rw, probes, 4, ok);
    assert(ok[0] == 0 && ok[1] == 0 && ok[2] == 1 && ok[3] == 1);
    return 0;
}
