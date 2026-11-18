#ifndef MONOTONIC_EPOCH_FENCING_TYPES_H
#define MONOTONIC_EPOCH_FENCING_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t high_water_epoch;
    uint64_t committed_value;
    uint32_t rejected_stale;
} fenced_register_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} monotonic_epoch_fencing_meta_t;

#endif /* MONOTONIC_EPOCH_FENCING_TYPES_H */
