#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(hamming_secded_74_d56_validate_len(1) == HAMMING_SECDED_74_D56_OK);
    uint8_t cw = hamming84_encode(0x0Au);
    uint8_t dec = 0;
    assert(hamming84_decode(cw, &dec) == 0 && dec == 0x0Au);
    for (int bit = 0; bit < 8; ++bit) {
        uint8_t corr = (uint8_t)(cw ^ (1u << bit));
        int rc = hamming84_decode(corr, &dec);
        assert(rc >= 0 && dec == 0x0Au);
    }
    assert(hamming84_decode((uint8_t)(cw ^ 0x05u), &dec) == -1);
    assert(hamming_secded_74_d56_verify_guard(true) == HAMMING_SECDED_74_D56_OK);
    return 0;
}
