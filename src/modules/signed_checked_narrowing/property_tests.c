#include "interface.h"
#include <assert.h>

int main(void) {
    int64_t samples[] = {0, -1, 1, INT32_MIN, INT32_MAX, (int64_t)INT32_MIN - 1, (int64_t)INT32_MAX + 1, INT64_MAX, INT64_MIN};
    for (size_t i = 0; i < sizeof(samples)/sizeof(samples[0]); ++i) {
        assert(signed_checked_narrowing_verify_bounds(samples[i]) == SIGNED_CHECKED_NARROWING_OK);
    }
    return 0;
}
