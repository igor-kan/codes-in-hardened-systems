#include "interface.h"

bounded_arena_bump_d56_err_t bounded_arena_bump_d56_verify_guard(bool cond) {
    if (!cond) {
        return BOUNDED_ARENA_BUMP_D56_ERR_INVARIANT;
    }
    return BOUNDED_ARENA_BUMP_D56_OK;
}
