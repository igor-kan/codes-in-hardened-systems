/**
 * @file errors.c
 * @brief Rich diagnostic error reporting for BPF Syscall Whitelist Filter with Argument Bounds.
 * Module: seccomp_syscall_filter
 */

typedef enum seccomp_syscall_filter_error {
    SECCOMP_SYSCALL_FILTER_OK = 0,
    SECCOMP_SYSCALL_FILTER_ERR_NULL = -100,
    SECCOMP_SYSCALL_FILTER_ERR_CAPACITY = -101,
    SECCOMP_SYSCALL_FILTER_ERR_CONVERGENCE = -102
} seccomp_syscall_filter_error_t;

const char* seccomp_syscall_filter_strerror(seccomp_syscall_filter_error_t err) {
    switch (err) {
        case SECCOMP_SYSCALL_FILTER_OK: return "Success";
        case SECCOMP_SYSCALL_FILTER_ERR_NULL: return "Encountered null pointer argument";
        case SECCOMP_SYSCALL_FILTER_ERR_CAPACITY: return "Capacity limit exceeded";
        case SECCOMP_SYSCALL_FILTER_ERR_CONVERGENCE: return "Numerical algorithm failed to converge";
        default: return "Unknown error";
    }
}
