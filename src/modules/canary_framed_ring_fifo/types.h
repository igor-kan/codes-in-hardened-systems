#ifndef CANARY_FRAMED_RING_FIFO_TYPES_H
#define CANARY_FRAMED_RING_FIFO_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define CRING_CAP 16
#define CANARY_HEAD 0xA55AA55AU
#define CANARY_TAIL 0x5AA55AA5U
#define SLOT_POISON 0xDEADBEEFULL
typedef struct {
    uint32_t head_canary;
    uint64_t payload;
    uint32_t tail_canary;
} canary_slot_t;

typedef struct {
    canary_slot_t slots[CRING_CAP];
    size_t head;
    size_t tail;
    size_t count;
} canary_ring_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} canary_framed_ring_fifo_meta_t;

#endif /* CANARY_FRAMED_RING_FIFO_TYPES_H */
