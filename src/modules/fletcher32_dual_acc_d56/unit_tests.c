#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(fletcher32_dual_acc_d56_validate_len(1) == FLETCHER32_DUAL_ACC_D56_OK);
    const uint16_t w1[4] = {10, 20, 30, 40};
    const uint16_t w2[4] = {20, 10, 30, 40};
    assert(fletcher32_words(w1, 4) != fletcher32_words(w2, 4));
    assert(fletcher32_words(w1, 4) != 0);
    assert(fletcher32_dual_acc_d56_verify_guard(true) == FLETCHER32_DUAL_ACC_D56_OK);
    return 0;
}
