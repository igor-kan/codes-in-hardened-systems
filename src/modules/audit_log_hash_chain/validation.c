#include "interface.h"

audit_log_hash_chain_err_t audit_validate_args(const audit_ledger_t* l) {
    if (!l) return AUDIT_LOG_HASH_CHAIN_ERR_NULL;
    if (l->len > AUDIT_MAX_RECS) return AUDIT_LOG_HASH_CHAIN_ERR_BOUNDS;
    return AUDIT_LOG_HASH_CHAIN_OK;
}
