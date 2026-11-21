#ifndef REED_PARITY_RAID5_D56_TYPES_H
#define REED_PARITY_RAID5_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    size_t drives;
    size_t stripe_bytes;
} raid_geom_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} reed_parity_raid5_d56_meta_t;

#endif /* REED_PARITY_RAID5_D56_TYPES_H */
