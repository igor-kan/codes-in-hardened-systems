#include "interface.h"
#include <assert.h>

int main(void) {
    const uint8_t payload[6] = {'a','b','c','1','2','3'};
    assert(verify_framer_roundtrip(payload, 6) == CHECKED_RING_FRAMER_OK);
    return 0;
}
