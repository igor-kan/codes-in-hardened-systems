#include "interface.h"
#include <assert.h>

int main(void) {
    assert(utf8_verify_rejected_vectors() == CONSTANT_TIME_UTF8_NORM_OK);
    const uint8_t emoji[4] = {0xF0U, 0x9FU, 0x9AU, 0x80U};
    utf8_audit_t res = utf8_strict_validate(emoji, 4);
    assert(res.valid && res.codepoints == 1);
    return 0;
}
