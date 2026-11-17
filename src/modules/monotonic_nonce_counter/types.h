#ifndef MONOTONIC_NONCE_COUNTER_TYPES_H
#define MONOTONIC_NONCE_COUNTER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t high_water;
    uint64_t bitmap;
    uint32_t epoch;
    uint32_t crc_seal;
    bool initialized;
} replay_window_t;

#endif /* MONOTONIC_NONCE_COUNTER_TYPES_H */
