#include "interface.h"
#include <assert.h>

int main(void) {
    uint8_t buf[256];
    guarded_arena_t a;
    assert(garena_init(&a, buf, sizeof(buf)) == FIXED_ARENA_BUMP_GUARD_OK);
    void* p1 = garena_alloc(&a, 33, 16);
    void* p2 = garena_alloc(&a, 64, 32);
    assert(p1 && ((uintptr_t)p1 & 15U) == 0);
    assert(p2 && ((uintptr_t)p2 & 31U) == 0);
    assert(garena_alloc(&a, 999999U, 8) == NULL);
    assert(garena_verify_invariants(&a) == FIXED_ARENA_BUMP_GUARD_OK);
    buf[250] ^= 0xFFU; // corrupt tail canary
    assert(garena_check_canary(&a) == FIXED_ARENA_BUMP_GUARD_ERR_INVARIANT);
    garena_reset_wipe(&a);
    assert(garena_check_canary(&a) == FIXED_ARENA_BUMP_GUARD_OK);
    return 0;
}
