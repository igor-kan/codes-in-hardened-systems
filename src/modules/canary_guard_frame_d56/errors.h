#ifndef CANARY_GUARD_FRAME_D56_ERRORS_H
#define CANARY_GUARD_FRAME_D56_ERRORS_H

typedef enum canary_guard_frame_d56_err {
    CANARY_GUARD_FRAME_D56_OK = 0,
    CANARY_GUARD_FRAME_D56_ERR_NULL = -1,
    CANARY_GUARD_FRAME_D56_ERR_BOUNDS = -2,
    CANARY_GUARD_FRAME_D56_ERR_INVALID = -3,
    CANARY_GUARD_FRAME_D56_ERR_OVERFLOW = -4,
    CANARY_GUARD_FRAME_D56_ERR_INVARIANT = -5
} canary_guard_frame_d56_err_t;



static inline const char* canary_guard_frame_d56_err_str(canary_guard_frame_d56_err_t err) {
    switch (err) {
        case CANARY_GUARD_FRAME_D56_OK: return "ok";
        case CANARY_GUARD_FRAME_D56_ERR_NULL: return "null pointer supplied";
        case CANARY_GUARD_FRAME_D56_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CANARY_GUARD_FRAME_D56_ERR_INVALID: return "domain precondition violated";
        case CANARY_GUARD_FRAME_D56_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CANARY_GUARD_FRAME_D56_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CANARY_GUARD_FRAME_D56_ERRORS_H */
