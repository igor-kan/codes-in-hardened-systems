#ifndef FLETCHER32_DUAL_ACC_D56_TYPES_H
#define FLETCHER32_DUAL_ACC_D56_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

typedef struct {
    uint32_t sum;
    size_t word_count;
} fletcher32_meta_t;

typedef struct {
    uint32_t version;
    uint32_t flags;
} fletcher32_dual_acc_d56_meta_t;

#endif /* FLETCHER32_DUAL_ACC_D56_TYPES_H */
