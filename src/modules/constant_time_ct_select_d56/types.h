#ifndef CONSTANT_TIME_CT_SELECT_D56_TYPES_H
#define CONSTANT_TIME_CT_SELECT_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint64_t chosen;
    int equal;
} ct_probe_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} constant_time_ct_select_d56_meta_t;

#endif /* CONSTANT_TIME_CT_SELECT_D56_TYPES_H */
