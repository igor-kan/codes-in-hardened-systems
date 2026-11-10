/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for Strict Seccomp-BPF Process Jail with Argument Bounds.
 * Module: seccomp_strict_jail
 */

typedef enum seccomp_strict_jail_error_code {
    SECCOMP_STRICT_JAIL_STATUS_OK = 0,
    SECCOMP_STRICT_JAIL_ERR_NULL_PTR = -10,
    SECCOMP_STRICT_JAIL_ERR_OUT_OF_BOUNDS = -11,
    SECCOMP_STRICT_JAIL_ERR_DIVERGENCE = -12
} seccomp_strict_jail_error_code_t;

const char* seccomp_strict_jail_error_message(seccomp_strict_jail_error_code_t code) {
    switch (code) {
        case SECCOMP_STRICT_JAIL_STATUS_OK: return "Operational success";
        case SECCOMP_STRICT_JAIL_ERR_NULL_PTR: return "Null pointer argument";
        case SECCOMP_STRICT_JAIL_ERR_OUT_OF_BOUNDS: return "Buffer boundary exceeded";
        case SECCOMP_STRICT_JAIL_ERR_DIVERGENCE: return "Numerical divergence detected";
        default: return "Unspecified error code";
    }
}
