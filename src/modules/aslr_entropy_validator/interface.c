/**
 * @file interface.c
 * @brief Abstract contracts and operational prototypes for Memory Layout Randomization Entropy Auditor.
 * Module: aslr_entropy_validator
 */

#ifndef ASLR_ENTROPY_VALIDATOR_INTERFACE_H
#define ASLR_ENTROPY_VALIDATOR_INTERFACE_H

#include "types.c"

typedef int (*aslr_entropy_validator_transform_fn)(const double* in_data, double* out_data, size_t n);

typedef struct aslr_entropy_validator_interface {
    int (*init)(aslr_entropy_validator_state_t* state, const aslr_entropy_validator_config_t* cfg);
    int (*execute)(aslr_entropy_validator_state_t* state, const double* in_vec, double* out_vec, size_t n);
    int (*reset)(aslr_entropy_validator_state_t* state);
    int (*destroy)(aslr_entropy_validator_state_t* state);
} aslr_entropy_validator_interface_t;

#endif /* ASLR_ENTROPY_VALIDATOR_INTERFACE_H */
