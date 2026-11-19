#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(arena_bump_watermark_c_validate_len(1) == ARENA_BUMP_WATERMARK_C_OK);
    safe_arena_t a; sarena_init(&a);
    void* p1 = sarena_alloc(&a, 24, 16);
    void* p2 = sarena_alloc(&a, 32, 8);
    assert(p1 != NULL && p2 != NULL && sarena_audit(&a));
    assert(sarena_alloc(&a, 300, 8) == NULL);
    sarena_reset(&a);
    assert(a.offset == 0 && a.high_water >= 56);
    assert(arena_bump_watermark_c_verify_guard(true) == ARENA_BUMP_WATERMARK_C_OK);
    return 0;
}
