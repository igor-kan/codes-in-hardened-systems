#ifndef SEQLOCK_VERSION_GUARD_D57_TYPES_H
#define SEQLOCK_VERSION_GUARD_D57_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t seq;
    uint64_t lo;
    uint64_t hi;
} seqlock_pair_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} seqlock_version_guard_d57_meta_t;

#endif /* SEQLOCK_VERSION_GUARD_D57_TYPES_H */
