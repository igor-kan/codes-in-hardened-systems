#ifndef FIXED_ARENA_BUMP_GUARD_ERRORS_H
#define FIXED_ARENA_BUMP_GUARD_ERRORS_H

typedef enum fixed_arena_bump_guard_err {
    FIXED_ARENA_BUMP_GUARD_OK = 0,
    FIXED_ARENA_BUMP_GUARD_ERR_NULL = -1,
    FIXED_ARENA_BUMP_GUARD_ERR_BOUNDS = -2,
    FIXED_ARENA_BUMP_GUARD_ERR_INVALID = -3,
    FIXED_ARENA_BUMP_GUARD_ERR_OVERFLOW = -4,
    FIXED_ARENA_BUMP_GUARD_ERR_INVARIANT = -5
} fixed_arena_bump_guard_err_t;



static inline const char* fixed_arena_bump_guard_err_str(fixed_arena_bump_guard_err_t err) {
    switch (err) {
        case FIXED_ARENA_BUMP_GUARD_OK: return "ok";
        case FIXED_ARENA_BUMP_GUARD_ERR_NULL: return "null pointer supplied";
        case FIXED_ARENA_BUMP_GUARD_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case FIXED_ARENA_BUMP_GUARD_ERR_INVALID: return "domain precondition violated";
        case FIXED_ARENA_BUMP_GUARD_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case FIXED_ARENA_BUMP_GUARD_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* FIXED_ARENA_BUMP_GUARD_ERRORS_H */
