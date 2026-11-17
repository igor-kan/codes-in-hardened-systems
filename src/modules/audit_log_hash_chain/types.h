#ifndef AUDIT_LOG_HASH_CHAIN_TYPES_H
#define AUDIT_LOG_HASH_CHAIN_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define AUDIT_MAX_RECS 128
typedef struct {
    uint64_t seq;
    uint64_t payload_digest;
    uint64_t chain_mac;
} audit_entry_t;

typedef struct {
    audit_entry_t recs[AUDIT_MAX_RECS];
    size_t len;
    uint64_t k0;
    uint64_t k1;
} audit_ledger_t;

#endif /* AUDIT_LOG_HASH_CHAIN_TYPES_H */
