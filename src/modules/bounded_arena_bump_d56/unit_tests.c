#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(bounded_arena_bump_d56_validate_len(1) == BOUNDED_ARENA_BUMP_D56_OK);
    uint8_t raw[64];
    bump_arena_t ar;
    bump_init(&ar, raw, 64);
    uint8_t *p1 = bump_alloc(&ar, 5, 1);
    uint8_t *p2 = bump_alloc(&ar, 16, 8);
    assert(p1 == raw && p2 == raw + 8);
    assert(bump_alloc(&ar, 64, 8) == NULL);
    bump_reset(&ar);
    assert(ar.used == 0);
    assert(bounded_arena_bump_d56_verify_guard(true) == BOUNDED_ARENA_BUMP_D56_OK);
    return 0;
}
