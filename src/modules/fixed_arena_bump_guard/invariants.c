#include "interface.h"

fixed_arena_bump_guard_err_t garena_verify_invariants(guarded_arena_t* a) {
    if (garena_validate(a) != FIXED_ARENA_BUMP_GUARD_OK) return FIXED_ARENA_BUMP_GUARD_ERR_INVARIANT;
    return FIXED_ARENA_BUMP_GUARD_OK;
}
