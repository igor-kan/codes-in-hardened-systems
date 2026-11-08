/**
 * @file types.c
 * @brief Core type definitions and operational interfaces for Capability-Gated Synchronous Zeroized IPC Channel.
 * Module: sanitized_ipc_channel
 */

#ifndef SANITIZED_IPC_CHANNEL_TYPES_H
#define SANITIZED_IPC_CHANNEL_TYPES_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SANITIZED_IPC_CHANNEL_ALIGNMENT 64
#define SANITIZED_IPC_CHANNEL_SUCCESS 0
#define SANITIZED_IPC_CHANNEL_ERR_NULL_PTR -1
#define SANITIZED_IPC_CHANNEL_ERR_INVALID_PARAM -2
#define SANITIZED_IPC_CHANNEL_ERR_OUT_OF_BOUNDS -3

typedef struct sanitized_ipc_channel_config {
    size_t capacity;
    uint32_t flags;
    double tolerance;
} sanitized_ipc_channel_config_t;

typedef struct sanitized_ipc_channel_context {
    void* buffer;
    size_t size;
    size_t capacity;
    uint64_t operations_count;
    sanitized_ipc_channel_config_t config;
} sanitized_ipc_channel_context_t;

int sanitized_ipc_channel_init(sanitized_ipc_channel_context_t* ctx, const sanitized_ipc_channel_config_t* cfg);
int sanitized_ipc_channel_destroy(sanitized_ipc_channel_context_t* ctx);

#ifdef __cplusplus
}
#endif

#endif /* SANITIZED_IPC_CHANNEL_TYPES_H */
