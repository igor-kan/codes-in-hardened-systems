#include "interface.h"
#include <assert.h>

int main(void) {
    hardened_slab_t s; redzone_slab_poison_init(&s);
    uint8_t* p = (uint8_t*)redzone_slab_poison_alloc(&s);
    // Simulate 1-byte buffer overflow past end of 64-byte payload into rear redzone
    p[64] = 0x00;
    assert(redzone_slab_poison_free(&s, p) == REDZONE_SLAB_POISON_ERR_INVARIANT);
    assert(s.corruption_count == 1);
    return 0;
}
