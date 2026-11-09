/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Automated Crash-Seed Minimization and Coverage Pack.
 * Module: minimized_afl_seed_pack
 */

#ifndef MINIMIZED_AFL_SEED_PACK_INTERFACE_H
#define MINIMIZED_AFL_SEED_PACK_INTERFACE_H

#include "types.c"

typedef int (*minimized_afl_seed_pack_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct minimized_afl_seed_pack_vtable {
    int (*init)(minimized_afl_seed_pack_state_t* state, const minimized_afl_seed_pack_config_t* cfg);
    int (*execute)(minimized_afl_seed_pack_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(minimized_afl_seed_pack_state_t* state);
} minimized_afl_seed_pack_vtable_t;

#endif /* MINIMIZED_AFL_SEED_PACK_INTERFACE_H */
