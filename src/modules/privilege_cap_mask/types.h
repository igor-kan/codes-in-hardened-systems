#ifndef PRIVILEGE_CAP_MASK_TYPES_H
#define PRIVILEGE_CAP_MASK_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define CAP_NET_BIND   (1ULL << 0)
#define CAP_DAC_READ   (1ULL << 1)
#define CAP_SYS_ADMIN  (1ULL << 2)
#define CAP_CHOWN      (1ULL << 3)
typedef struct {
    uint64_t bounding;
    uint64_t permitted;
    uint64_t effective;
    bool locked;
} cap_cred_t;

#endif /* PRIVILEGE_CAP_MASK_TYPES_H */
