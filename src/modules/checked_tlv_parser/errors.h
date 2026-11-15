#ifndef CHECKED_TLV_PARSER_ERRORS_H
#define CHECKED_TLV_PARSER_ERRORS_H

typedef enum checked_tlv_parser_err {
    CHECKED_TLV_PARSER_OK = 0,
    CHECKED_TLV_PARSER_ERR_NULL = -1,
    CHECKED_TLV_PARSER_ERR_BOUNDS = -2,
    CHECKED_TLV_PARSER_ERR_INVALID = -3,
    CHECKED_TLV_PARSER_ERR_OVERFLOW = -4,
    CHECKED_TLV_PARSER_ERR_INVARIANT = -5
} checked_tlv_parser_err_t;



static inline const char* checked_tlv_parser_err_str(checked_tlv_parser_err_t err) {
    switch (err) {
        case CHECKED_TLV_PARSER_OK: return "ok";
        case CHECKED_TLV_PARSER_ERR_NULL: return "null pointer supplied";
        case CHECKED_TLV_PARSER_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case CHECKED_TLV_PARSER_ERR_INVALID: return "domain precondition violated";
        case CHECKED_TLV_PARSER_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case CHECKED_TLV_PARSER_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* CHECKED_TLV_PARSER_ERRORS_H */
