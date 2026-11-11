/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Pledge/Unveil Style Process Constraint Sandboxing Jail.
 * Module: sandbox_pledge_promises
 */

typedef enum sandbox_pledge_promises_error_code {
    SANDBOX_PLEDGE_PROMISES_STATUS_OK = 0,
    SANDBOX_PLEDGE_PROMISES_ERR_NULL_PTR = -20,
    SANDBOX_PLEDGE_PROMISES_ERR_OUT_OF_BOUNDS = -21,
    SANDBOX_PLEDGE_PROMISES_ERR_DIVERGENCE = -22
} sandbox_pledge_promises_error_code_t;

const char* sandbox_pledge_promises_error_message(sandbox_pledge_promises_error_code_t code) {
    switch (code) {
        case SANDBOX_PLEDGE_PROMISES_STATUS_OK: return "Operational success";
        case SANDBOX_PLEDGE_PROMISES_ERR_NULL_PTR: return "Null pointer argument";
        case SANDBOX_PLEDGE_PROMISES_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case SANDBOX_PLEDGE_PROMISES_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
