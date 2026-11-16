#include "interface.h"

fixed_arena_bump_guard_err_t garena_validate(const guarded_arena_t* a) {
    if (!a || !a->base) return FIXED_ARENA_BUMP_GUARD_ERR_NULL;
    if (a->offset > a->cap) return FIXED_ARENA_BUMP_GUARD_ERR_BOUNDS;
    return garena_check_canary(a);
}
