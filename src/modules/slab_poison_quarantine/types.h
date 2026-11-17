#ifndef SLAB_POISON_QUARANTINE_TYPES_H
#define SLAB_POISON_QUARANTINE_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define QSLAB_SLOTS 32
#define QSLAB_BLK 64
#define QSLAB_POISON 0xFEU

typedef struct {
    uint8_t mem[QSLAB_SLOTS][QSLAB_BLK];
    uint8_t state[QSLAB_SLOTS]; // 0=free_ready, 1=live, 2=quarantined
    int32_t q_ring[QSLAB_SLOTS];
    size_t q_head;
    size_t q_tail;
    size_t q_count;
} qslab_t;

#endif /* SLAB_POISON_QUARANTINE_TYPES_H */
