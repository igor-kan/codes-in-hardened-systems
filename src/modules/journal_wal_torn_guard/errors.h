#ifndef JOURNAL_WAL_TORN_GUARD_ERRORS_H
#define JOURNAL_WAL_TORN_GUARD_ERRORS_H

typedef enum journal_wal_torn_guard_err {
    JOURNAL_WAL_TORN_GUARD_OK = 0,
    JOURNAL_WAL_TORN_GUARD_ERR_NULL = -1,
    JOURNAL_WAL_TORN_GUARD_ERR_BOUNDS = -2,
    JOURNAL_WAL_TORN_GUARD_ERR_INVALID = -3,
    JOURNAL_WAL_TORN_GUARD_ERR_OVERFLOW = -4,
    JOURNAL_WAL_TORN_GUARD_ERR_INVARIANT = -5
} journal_wal_torn_guard_err_t;



static inline const char* journal_wal_torn_guard_err_str(journal_wal_torn_guard_err_t err) {
    switch (err) {
        case JOURNAL_WAL_TORN_GUARD_OK: return "ok";
        case JOURNAL_WAL_TORN_GUARD_ERR_NULL: return "null pointer supplied";
        case JOURNAL_WAL_TORN_GUARD_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case JOURNAL_WAL_TORN_GUARD_ERR_INVALID: return "domain precondition violated";
        case JOURNAL_WAL_TORN_GUARD_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case JOURNAL_WAL_TORN_GUARD_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* JOURNAL_WAL_TORN_GUARD_ERRORS_H */
