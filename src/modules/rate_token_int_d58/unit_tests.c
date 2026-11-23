#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(rate_token_int_d58_validate_len(1) == RATE_TOKEN_INT_D58_OK);
    int_bucket_t bk; bucket_init(&bk, 10ULL, 2ULL);
    assert(bucket_take(&bk, 0ULL, 8ULL) == 0);
    assert(bucket_take(&bk, 0ULL, 4ULL) == -1);
    assert(bucket_take(&bk, 2ULL, 4ULL) == 0);
    assert(rate_token_int_d58_verify_guard(true) == RATE_TOKEN_INT_D58_OK);
    return 0;
}
