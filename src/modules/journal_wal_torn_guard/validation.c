#include "interface.h"

journal_wal_torn_guard_err_t journal_wal_torn_guard_validate_len(size_t n) {
    if (n == 0) {
        return JOURNAL_WAL_TORN_GUARD_ERR_INVALID;
    }
    return JOURNAL_WAL_TORN_GUARD_OK;
}
