#ifndef JOURNAL_WAL_TORN_GUARD_TYPES_H
#define JOURNAL_WAL_TORN_GUARD_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define WAL_MAGIC 0x57414C31U
typedef struct {
    uint32_t magic;
    uint64_t lsn;
    uint32_t len;
    uint32_t checksum;
    uint8_t data[32];
    uint64_t trailer_lsn;
} wal_frame_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} journal_wal_torn_guard_meta_t;

#endif /* JOURNAL_WAL_TORN_GUARD_TYPES_H */
