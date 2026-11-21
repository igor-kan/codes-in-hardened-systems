#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(reed_parity_raid5_d56_validate_len(1) == REED_PARITY_RAID5_D56_OK);
    uint8_t drives[12] = {10,20,30,40, 50,60,70,80, 11,22,33,44};
    uint8_t par[4];
    raid_compute_parity(drives, 3, 4, par);
    drives[4] = 0; drives[5] = 0; drives[6] = 0; drives[7] = 0;
    raid_recover_erasure(drives, par, 3, 4, 1);
    assert(drives[4] == 50 && drives[5] == 60 && drives[6] == 70 && drives[7] == 80);
    assert(reed_parity_raid5_d56_verify_guard(true) == REED_PARITY_RAID5_D56_OK);
    return 0;
}
