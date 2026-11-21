#include "interface.h"

bounded_arena_bump_d56_err_t bounded_arena_bump_d56_validate_len(size_t n) {
    if (n == 0) {
        return BOUNDED_ARENA_BUMP_D56_ERR_INVALID;
    }
    return BOUNDED_ARENA_BUMP_D56_OK;
}
