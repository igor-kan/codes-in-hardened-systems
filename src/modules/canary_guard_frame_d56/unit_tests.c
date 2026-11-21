#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(canary_guard_frame_d56_validate_len(1) == CANARY_GUARD_FRAME_D56_OK);
    guarded_frame_t f;
    guard_seal(&f, 0x99887766ULL, 111ULL, 222ULL);
    assert(guard_verify(&f, 0x99887766ULL) == 0);
    f.data[1] ^= 1ULL;
    assert(guard_verify(&f, 0x99887766ULL) == -1);
    assert(canary_guard_frame_d56_verify_guard(true) == CANARY_GUARD_FRAME_D56_OK);
    return 0;
}
