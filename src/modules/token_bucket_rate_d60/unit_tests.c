#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(token_bucket_rate_d60_validate_len(1) == TOKEN_BUCKET_RATE_D60_OK);
    token_bucket_t tb;
    tb_init_d60(&tb, 10ULL, 5ULL, 1000000000ULL);
    assert(tb_allow_d60(&tb, 1000000000ULL, 10ULL));
    assert(!tb_allow_d60(&tb, 1100000000ULL, 1ULL));
    assert(tb_allow_d60(&tb, 2000000000ULL, 5ULL));
    assert(token_bucket_rate_d60_verify_guard(true) == TOKEN_BUCKET_RATE_D60_OK);
    return 0;
}
