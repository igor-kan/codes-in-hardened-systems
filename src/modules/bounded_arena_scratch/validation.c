#include "interface.h"

bounded_arena_scratch_err_t arena_check_canary(const guarded_arena_t* a) {
    if (!a || !a->trailer_canary) return BOUNDED_ARENA_SCRATCH_ERR_NULL;
    return (*a->trailer_canary == ARENA_CANARY) ? BOUNDED_ARENA_SCRATCH_OK : BOUNDED_ARENA_SCRATCH_ERR_INVARIANT;
}
