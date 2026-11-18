#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(siphash13_keyed_cookie_validate_len(1) == SIPHASH13_KEYED_COOKIE_OK);
    cookie_key_t k = {0x1122334455667788ULL, 0x99aabbccddeeff00ULL};
    uint64_t c = sipcookie_make(k, 0x7f000001ULL, 100U);
    assert(sipcookie_verify(k, 0x7f000001ULL, 101U, c));
    assert(!sipcookie_verify(k, 0x7f000001ULL, 105U, c));
    assert(!sipcookie_verify(k, 0x7f000002ULL, 100U, c));
    assert(siphash13_keyed_cookie_verify_guard(true) == SIPHASH13_KEYED_COOKIE_OK);
    return 0;
}
