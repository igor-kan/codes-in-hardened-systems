#include "interface.h"

audit_log_hash_chain_err_t audit_verify_tamper_detection(void) {
    audit_ledger_t l;
    audit_init(&l, 0x1111ULL, 0x2222ULL);
    for (uint64_t i = 0; i < 8; ++i) audit_append(&l, 1000ULL + i * 7);
    if (audit_verify_chain(&l) != AUDIT_LOG_HASH_CHAIN_OK) return AUDIT_LOG_HASH_CHAIN_ERR_INVARIANT;
    l.recs[3].payload_digest ^= 1ULL;
    if (audit_verify_chain(&l) == AUDIT_LOG_HASH_CHAIN_OK) return AUDIT_LOG_HASH_CHAIN_ERR_INVARIANT;
    return AUDIT_LOG_HASH_CHAIN_OK;
}
