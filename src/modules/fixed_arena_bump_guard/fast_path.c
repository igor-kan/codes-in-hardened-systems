#include "interface.h"
#include <string.h>

fixed_arena_bump_guard_err_t garena_check_canary(const guarded_arena_t* a) {
    if (!a || !a->base) return FIXED_ARENA_BUMP_GUARD_ERR_NULL;
    uint64_t val = 0;
    memcpy(&val, a->base + a->cap, sizeof(val));
    return (val == GUARD_CANARY_U64) ? FIXED_ARENA_BUMP_GUARD_OK : FIXED_ARENA_BUMP_GUARD_ERR_INVARIANT;
}
