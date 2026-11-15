#ifndef RING_JOURNAL_CHECKSUM_ERRORS_H
#define RING_JOURNAL_CHECKSUM_ERRORS_H

typedef enum ring_journal_checksum_err {
    RING_JOURNAL_CHECKSUM_OK = 0,
    RING_JOURNAL_CHECKSUM_ERR_NULL = -1,
    RING_JOURNAL_CHECKSUM_ERR_BOUNDS = -2,
    RING_JOURNAL_CHECKSUM_ERR_INVALID = -3,
    RING_JOURNAL_CHECKSUM_ERR_OVERFLOW = -4,
    RING_JOURNAL_CHECKSUM_ERR_INVARIANT = -5
} ring_journal_checksum_err_t;



static inline const char* ring_journal_checksum_err_str(ring_journal_checksum_err_t err) {
    switch (err) {
        case RING_JOURNAL_CHECKSUM_OK: return "ok";
        case RING_JOURNAL_CHECKSUM_ERR_NULL: return "null pointer supplied";
        case RING_JOURNAL_CHECKSUM_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case RING_JOURNAL_CHECKSUM_ERR_INVALID: return "domain precondition violated";
        case RING_JOURNAL_CHECKSUM_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case RING_JOURNAL_CHECKSUM_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* RING_JOURNAL_CHECKSUM_ERRORS_H */
