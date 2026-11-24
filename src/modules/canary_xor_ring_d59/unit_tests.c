#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(canary_xor_ring_d59_validate_len(1) == CANARY_XOR_RING_D59_OK);
    sealed_slot_t s = seal_slot(123456ULL, 0x999ULL);
    uint64_t v = 0;
    assert(unseal_slot(s, 0x999ULL, &v) == 0 && v == 123456ULL);
    s.val ^= 1ULL;
    assert(unseal_slot(s, 0x999ULL, &v) == -1);
    assert(canary_xor_ring_d59_verify_guard(true) == CANARY_XOR_RING_D59_OK);
    return 0;
}
