#ifndef CHECKED_FIXEDPOINT_Q16_INTERFACE_H
#define CHECKED_FIXEDPOINT_Q16_INTERFACE_H

#include "types.h"
#include "errors.h"

checked_fixedpoint_q16_err_t q16_add_checked(q16_t a, q16_t b, q16_t* out);
checked_fixedpoint_q16_err_t q16_mul_checked(q16_t a, q16_t b, q16_t* out);
checked_fixedpoint_q16_err_t q16_div_checked(q16_t a, q16_t b, q16_t* out);
checked_fixedpoint_q16_err_t q16_validate_nonzero(q16_t denom);
q16_t q16_saturating_add(q16_t a, q16_t b);
void q16_parallel_dot(const q16_t* a, const q16_t* b, size_t n, int64_t* out_sum);
checked_fixedpoint_q16_err_t q16_verify_identities(void);

#endif /* CHECKED_FIXEDPOINT_Q16_INTERFACE_H */
