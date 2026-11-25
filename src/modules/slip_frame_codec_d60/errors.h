#ifndef SLIP_FRAME_CODEC_D60_ERRORS_H
#define SLIP_FRAME_CODEC_D60_ERRORS_H

typedef enum slip_frame_codec_d60_err {
    SLIP_FRAME_CODEC_D60_OK = 0,
    SLIP_FRAME_CODEC_D60_ERR_NULL = -1,
    SLIP_FRAME_CODEC_D60_ERR_BOUNDS = -2,
    SLIP_FRAME_CODEC_D60_ERR_INVALID = -3,
    SLIP_FRAME_CODEC_D60_ERR_OVERFLOW = -4,
    SLIP_FRAME_CODEC_D60_ERR_INVARIANT = -5
} slip_frame_codec_d60_err_t;



static inline const char* slip_frame_codec_d60_err_str(slip_frame_codec_d60_err_t err) {
    switch (err) {
        case SLIP_FRAME_CODEC_D60_OK: return "ok";
        case SLIP_FRAME_CODEC_D60_ERR_NULL: return "null pointer supplied";
        case SLIP_FRAME_CODEC_D60_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case SLIP_FRAME_CODEC_D60_ERR_INVALID: return "domain precondition violated";
        case SLIP_FRAME_CODEC_D60_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case SLIP_FRAME_CODEC_D60_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* SLIP_FRAME_CODEC_D60_ERRORS_H */
