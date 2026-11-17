#ifndef BOUNDED_ARENA_SCRATCH_ERRORS_H
#define BOUNDED_ARENA_SCRATCH_ERRORS_H

typedef enum bounded_arena_scratch_err {
    BOUNDED_ARENA_SCRATCH_OK = 0,
    BOUNDED_ARENA_SCRATCH_ERR_NULL = -1,
    BOUNDED_ARENA_SCRATCH_ERR_BOUNDS = -2,
    BOUNDED_ARENA_SCRATCH_ERR_INVALID = -3,
    BOUNDED_ARENA_SCRATCH_ERR_OVERFLOW = -4,
    BOUNDED_ARENA_SCRATCH_ERR_INVARIANT = -5
} bounded_arena_scratch_err_t;



static inline const char* bounded_arena_scratch_err_str(bounded_arena_scratch_err_t err) {
    switch (err) {
        case BOUNDED_ARENA_SCRATCH_OK: return "ok";
        case BOUNDED_ARENA_SCRATCH_ERR_NULL: return "null pointer supplied";
        case BOUNDED_ARENA_SCRATCH_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case BOUNDED_ARENA_SCRATCH_ERR_INVALID: return "domain precondition violated";
        case BOUNDED_ARENA_SCRATCH_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case BOUNDED_ARENA_SCRATCH_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* BOUNDED_ARENA_SCRATCH_ERRORS_H */
