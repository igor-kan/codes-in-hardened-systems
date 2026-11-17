#include "interface.h"
#include <assert.h>

int main(void) {
    assert(verify_anti_replay_contract() == MONOTONIC_NONCE_COUNTER_OK);
    return 0;
}
