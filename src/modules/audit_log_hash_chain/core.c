#include "interface.h"

void audit_init(audit_ledger_t* l, uint64_t k0, uint64_t k1) {
    l->len = 0;
    l->k0 = k0;
    l->k1 = k1;
}

audit_log_hash_chain_err_t audit_append(audit_ledger_t* l, uint64_t payload_digest) {
    if (!l) return AUDIT_LOG_HASH_CHAIN_ERR_NULL;
    if (l->len >= AUDIT_MAX_RECS) return AUDIT_LOG_HASH_CHAIN_ERR_BOUNDS;
    uint64_t prev = (l->len == 0) ? (l->k0 ^ l->k1) : l->recs[l->len - 1].chain_mac;
    uint64_t seq = (uint64_t)l->len;
    uint64_t mac = fast_keyed_compress(l->k0, l->k1, prev, seq, payload_digest);
    l->recs[l->len++] = (audit_entry_t){seq, payload_digest, mac};
    return AUDIT_LOG_HASH_CHAIN_OK;
}

audit_log_hash_chain_err_t audit_verify_chain(const audit_ledger_t* l) {
    if (!l) return AUDIT_LOG_HASH_CHAIN_ERR_NULL;
    if (l->len > AUDIT_MAX_RECS) return AUDIT_LOG_HASH_CHAIN_ERR_BOUNDS;
    uint64_t prev = l->k0 ^ l->k1;
    for (size_t i = 0; i < l->len; ++i) {
        if (l->recs[i].seq != (uint64_t)i) return AUDIT_LOG_HASH_CHAIN_ERR_INVARIANT;
        uint64_t expected = fast_keyed_compress(l->k0, l->k1, prev, l->recs[i].seq, l->recs[i].payload_digest);
        if (expected != l->recs[i].chain_mac) return AUDIT_LOG_HASH_CHAIN_ERR_INVARIANT;
        prev = expected;
    }
    return AUDIT_LOG_HASH_CHAIN_OK;
}
