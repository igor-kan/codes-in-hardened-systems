#ifndef REED_PARITY_RAID5_D56_ERRORS_H
#define REED_PARITY_RAID5_D56_ERRORS_H

typedef enum reed_parity_raid5_d56_err {
    REED_PARITY_RAID5_D56_OK = 0,
    REED_PARITY_RAID5_D56_ERR_NULL = -1,
    REED_PARITY_RAID5_D56_ERR_BOUNDS = -2,
    REED_PARITY_RAID5_D56_ERR_INVALID = -3,
    REED_PARITY_RAID5_D56_ERR_OVERFLOW = -4,
    REED_PARITY_RAID5_D56_ERR_INVARIANT = -5
} reed_parity_raid5_d56_err_t;



static inline const char* reed_parity_raid5_d56_err_str(reed_parity_raid5_d56_err_t err) {
    switch (err) {
        case REED_PARITY_RAID5_D56_OK: return "ok";
        case REED_PARITY_RAID5_D56_ERR_NULL: return "null pointer supplied";
        case REED_PARITY_RAID5_D56_ERR_BOUNDS: return "dimension or capacity out of bounds";
        case REED_PARITY_RAID5_D56_ERR_INVALID: return "domain precondition violated";
        case REED_PARITY_RAID5_D56_ERR_OVERFLOW: return "arithmetic overflow or non-finite value";
        case REED_PARITY_RAID5_D56_ERR_INVARIANT: return "postcondition invariant violated";
        default: return "unknown error";
    }
}

#endif /* REED_PARITY_RAID5_D56_ERRORS_H */
