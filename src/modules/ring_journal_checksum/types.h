#ifndef RING_JOURNAL_CHECKSUM_TYPES_H
#define RING_JOURNAL_CHECKSUM_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define JOURNAL_SLOTS 32U
#define JOURNAL_MAX_DATA 48U
typedef struct {
    uint64_t seq;
    uint32_t len;
    uint32_t crc32;
    uint8_t data[JOURNAL_MAX_DATA];
} journal_entry_t;

typedef struct {
    journal_entry_t entries[JOURNAL_SLOTS];
    uint64_t next_seq;
} journal_ring_t;

#endif /* RING_JOURNAL_CHECKSUM_TYPES_H */
