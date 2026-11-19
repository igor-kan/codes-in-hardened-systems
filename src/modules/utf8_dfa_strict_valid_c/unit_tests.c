#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(utf8_dfa_strict_valid_c_validate_len(1) == UTF8_DFA_STRICT_VALID_C_OK);
    const uint8_t ok[7] = {'h', 'i', 0xc3, 0xa9, 0xe2, 0x82, 0xac}; /* hi + e-acute + euro */
    const uint8_t surr[3] = {0xed, 0xa0, 0x80}; /* U+D800 surrogate */
    const uint8_t over[2] = {0xc0, 0xaf}; /* overlong slash */
    assert(strict_utf8_valid(ok, 7));
    assert(!strict_utf8_valid(surr, 3));
    assert(!strict_utf8_valid(over, 2));
    assert(utf8_dfa_strict_valid_c_verify_guard(true) == UTF8_DFA_STRICT_VALID_C_OK);
    return 0;
}
