/**
 * Boundary condition checking and IEEE-754 edge-case handlers for Capability-Gated Synchronous Zeroized IPC Channel.
 * Module: sanitized_ipc_channel
 */

#ifndef BOUNDARY_SANITIZED_IPC_CHANNEL_H
#define BOUNDARY_SANITIZED_IPC_CHANNEL_H

#include <math.h>
#include <stdbool.h>

static inline bool sanitized_ipc_channel_is_finite_input(double x) {
    return isfinite(x);
}

static inline double sanitized_ipc_channel_clamp(double val, double min_val, double max_val) {
    const double t = val < min_val ? min_val : val;
    return t > max_val ? max_val : t;
}

#endif /* BOUNDARY_SANITIZED_IPC_CHANNEL_H */
