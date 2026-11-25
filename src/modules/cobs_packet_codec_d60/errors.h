#ifndef COBS_PACKET_CODEC_D60_ERRORS_H
#define COBS_PACKET_CODEC_D60_ERRORS_H

typedef enum cobs_packet_codec_d60_err {
    COBS_PACKET_CODEC_D60_OK = 0,
    COBS_PACKET_CODEC_D60_ERR_NULL = -1,
    COBS_PACKET_CODEC_D60_ERR_BOUNDS = -2,
    COBS_PACKET_CODEC_D60_ERR_INVALID = -3,
    COBS_PACKET_CODEC_D60_ERR_OVERFLOW = -4,
    COBS_PACKET_CODEC_D60_ERR_INVARIANT = -5
} cobs_packet_codec_d60_err_t;



static inline const char* cobs_packet_codec_d60_err_str(cobs_packet_codec_d60_err_t err) {
    switch (err) {
        case COBS_PACKET_CODEC_D60_OK: return "ok";
        case COBS_PACKET_CODEC_D60_ERR_NULL: return "null pointer supplied";
        case COBS_PACKET_CODEC_D60_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case COBS_PACKET_CODEC_D60_ERR_INVALID: return "domain precondition violated";
        case COBS_PACKET_CODEC_D60_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case COBS_PACKET_CODEC_D60_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* COBS_PACKET_CODEC_D60_ERRORS_H */
