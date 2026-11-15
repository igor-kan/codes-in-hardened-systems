#ifndef PATH_CANONICAL_JAIL_ERRORS_H
#define PATH_CANONICAL_JAIL_ERRORS_H

typedef enum path_canonical_jail_err {
    PATH_CANONICAL_JAIL_OK = 0,
    PATH_CANONICAL_JAIL_ERR_NULL = -1,
    PATH_CANONICAL_JAIL_ERR_BOUNDS = -2,
    PATH_CANONICAL_JAIL_ERR_INVALID = -3,
    PATH_CANONICAL_JAIL_ERR_OVERFLOW = -4,
    PATH_CANONICAL_JAIL_ERR_INVARIANT = -5
} path_canonical_jail_err_t;



static inline const char* path_canonical_jail_err_str(path_canonical_jail_err_t err) {
    switch (err) {
        case PATH_CANONICAL_JAIL_OK: return "ok";
        case PATH_CANONICAL_JAIL_ERR_NULL: return "null pointer supplied";
        case PATH_CANONICAL_JAIL_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case PATH_CANONICAL_JAIL_ERR_INVALID: return "domain precondition violated";
        case PATH_CANONICAL_JAIL_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case PATH_CANONICAL_JAIL_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* PATH_CANONICAL_JAIL_ERRORS_H */
