#ifndef AUDIT_LOG_HASH_CHAIN_INTERFACE_H
#define AUDIT_LOG_HASH_CHAIN_INTERFACE_H

#include "types.h"
#include "errors.h"

void audit_init(audit_ledger_t* l, uint64_t k0, uint64_t k1);
audit_log_hash_chain_err_t audit_append(audit_ledger_t* l, uint64_t payload_digest);
audit_log_hash_chain_err_t audit_verify_chain(const audit_ledger_t* l);
audit_log_hash_chain_err_t audit_validate_args(const audit_ledger_t* l);
uint64_t fast_keyed_compress(uint64_t k0, uint64_t k1, uint64_t prev_mac, uint64_t seq, uint64_t digest);
void parallel_verify_two_ledgers(const audit_ledger_t* a, const audit_ledger_t* b, audit_log_hash_chain_err_t out[2]);
audit_log_hash_chain_err_t audit_verify_tamper_detection(void);

#endif /* AUDIT_LOG_HASH_CHAIN_INTERFACE_H */
