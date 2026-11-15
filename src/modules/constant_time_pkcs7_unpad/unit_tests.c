#include "interface.h"
#include <assert.h>

int main(void) {
    uint8_t blk[16] = {'A','B','C', 13,13,13,13,13,13,13,13,13,13,13,13,13};
    size_t ulen = 0;
    assert(constant_time_pkcs7_unpad_verify(blk, 16, &ulen) == CONSTANT_TIME_PKCS7_UNPAD_OK);
    assert(ulen == 3);
    blk[5] = 0x00; // Tamper one padding byte
    assert(constant_time_pkcs7_unpad_verify(blk, 16, &ulen) == CONSTANT_TIME_PKCS7_UNPAD_ERR_INVALID);
    return 0;
}
