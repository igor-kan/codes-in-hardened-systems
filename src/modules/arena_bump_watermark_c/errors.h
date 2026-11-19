#ifndef ARENA_BUMP_WATERMARK_C_ERRORS_H
#define ARENA_BUMP_WATERMARK_C_ERRORS_H

typedef enum arena_bump_watermark_c_err {
    ARENA_BUMP_WATERMARK_C_OK = 0,
    ARENA_BUMP_WATERMARK_C_ERR_NULL = -1,
    ARENA_BUMP_WATERMARK_C_ERR_BOUNDS = -2,
    ARENA_BUMP_WATERMARK_C_ERR_INVALID = -3,
    ARENA_BUMP_WATERMARK_C_ERR_OVERFLOW = -4,
    ARENA_BUMP_WATERMARK_C_ERR_INVARIANT = -5
} arena_bump_watermark_c_err_t;



static inline const char* arena_bump_watermark_c_err_str(arena_bump_watermark_c_err_t err) {
    switch (err) {
        case ARENA_BUMP_WATERMARK_C_OK: return "ok";
        case ARENA_BUMP_WATERMARK_C_ERR_NULL: return "null pointer supplied";
        case ARENA_BUMP_WATERMARK_C_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case ARENA_BUMP_WATERMARK_C_ERR_INVALID: return "domain precondition violated";
        case ARENA_BUMP_WATERMARK_C_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case ARENA_BUMP_WATERMARK_C_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* ARENA_BUMP_WATERMARK_C_ERRORS_H */
