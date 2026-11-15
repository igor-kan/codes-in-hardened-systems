#ifndef PATH_CANONICAL_JAIL_TYPES_H
#define PATH_CANONICAL_JAIL_TYPES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define PATH_JAIL_MAX_LEN 512U
typedef struct {
    char normalized[PATH_JAIL_MAX_LEN];
    size_t len;
    uint32_t dotdot_blocked;
} path_jail_result_t;

#endif /* PATH_CANONICAL_JAIL_TYPES_H */
