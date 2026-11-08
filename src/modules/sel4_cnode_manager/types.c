/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for seL4 Microkernel Capability Node Derivation Manager.
 * Module: sel4_cnode_manager
 */

#ifndef SEL4_CNODE_MANAGER_TYPES_H
#define SEL4_CNODE_MANAGER_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SEL4_CNODE_MANAGER_ALIGNMENT 64
#define SEL4_CNODE_MANAGER_SUCCESS 0
#define SEL4_CNODE_MANAGER_ERR_NULL_PTR -1
#define SEL4_CNODE_MANAGER_ERR_INVALID_PARAM -2
#define SEL4_CNODE_MANAGER_ERR_OUT_OF_BOUNDS -3

typedef struct sel4_cnode_manager_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} sel4_cnode_manager_config_t;

typedef struct sel4_cnode_manager_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    sel4_cnode_manager_config_t config;
} sel4_cnode_manager_context_t;

int sel4_cnode_manager_init(sel4_cnode_manager_context_t* ctx, const sel4_cnode_manager_config_t* cfg);
int sel4_cnode_manager_destroy(sel4_cnode_manager_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* SEL4_CNODE_MANAGER_TYPES_H */
