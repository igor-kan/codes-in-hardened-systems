/**
 * @file interface.c
 * @brief Abstract contracts and prototypes for Linux Landlock LSM Filesystem Sandbox Manager.
 * Module: sandbox_landlock_ruleset
 */

#ifndef SANDBOX_LANDLOCK_RULESET_INTERFACE_H
#define SANDBOX_LANDLOCK_RULESET_INTERFACE_H

#include "types.c"

typedef int (*sandbox_landlock_ruleset_kernel_fn)(const double* in_data, double* out_data, size_t n);

typedef struct sandbox_landlock_ruleset_vtable {
    int (*init)(sandbox_landlock_ruleset_state_t* state, const sandbox_landlock_ruleset_config_t* cfg);
    int (*execute)(sandbox_landlock_ruleset_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*destroy)(sandbox_landlock_ruleset_state_t* state);
} sandbox_landlock_ruleset_vtable_t;

#endif /* SANDBOX_LANDLOCK_RULESET_INTERFACE_H */
