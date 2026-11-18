#include "interface.h"

journal_wal_torn_guard_err_t journal_wal_torn_guard_verify_guard(bool cond) {
    if (!cond) {
        return JOURNAL_WAL_TORN_GUARD_ERR_INVARIANT;
    }
    return JOURNAL_WAL_TORN_GUARD_OK;
}
