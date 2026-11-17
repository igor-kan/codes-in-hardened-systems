#include "interface.h"
#include <assert.h>

int main(void) {
    const uint8_t a[5] = {'a','b','c','d','e'};
    const uint8_t b[4] = {0xF4U, 0x90U, 0x80U, 0x80U}; // > U+10FFFF invalid
    utf8_audit_t out[2];
    utf8_parallel_audit(a, 5, b, 4, out);
    assert(out[0].valid && out[0].codepoints == 5);
    assert(!out[1].valid && out[1].first_bad_offset == 0);
    return 0;
}
