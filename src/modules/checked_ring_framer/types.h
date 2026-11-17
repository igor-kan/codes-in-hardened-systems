#ifndef CHECKED_RING_FRAMER_TYPES_H
#define CHECKED_RING_FRAMER_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define FRAMER_MAX_MTU 512
typedef struct {
    size_t max_mtu;
} framer_cfg_t;

#endif /* CHECKED_RING_FRAMER_TYPES_H */
