#include "interface.h"
#include <assert.h>

int main(void) {
    for (size_t dl = 0; dl <= 16; ++dl) {
        uint8_t buf[32] = {0x41};
        size_t tot = 0, up = 0;
        assert(constant_time_pkcs7_unpad_pad(buf, dl, 16, &tot) == CONSTANT_TIME_PKCS7_UNPAD_OK);
        assert(tot == 16 || tot == 32);
        assert(constant_time_pkcs7_unpad_verify(buf + (tot - 16), 16, &up) == CONSTANT_TIME_PKCS7_UNPAD_OK);
        assert(up == (dl % 16));
    }
    return 0;
}
