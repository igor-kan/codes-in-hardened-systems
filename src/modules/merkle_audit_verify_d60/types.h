#ifndef MERKLE_AUDIT_VERIFY_D60_TYPES_H
#define MERKLE_AUDIT_VERIFY_D60_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define MERKLE_MAX_DEPTH 16
typedef struct {
    uint64_t siblings[MERKLE_MAX_DEPTH];
    uint8_t directions[MERKLE_MAX_DEPTH];
    size_t depth;
} merkle_proof_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} merkle_audit_verify_d60_meta_t;

#endif /* MERKLE_AUDIT_VERIFY_D60_TYPES_H */
