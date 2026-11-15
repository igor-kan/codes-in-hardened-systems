#include "interface.h"
#include <assert.h>

int main(void) {
    hardened_slab_t s;
    redzone_slab_poison_init(&s);
    uint8_t* p = (uint8_t*)redzone_slab_poison_alloc(&s);
    assert(p != NULL);
    p[0] = 42; p[63] = 99;
    assert(redzone_slab_poison_audit_all(&s) == REDZONE_SLAB_POISON_OK);
    assert(redzone_slab_poison_free(&s, p) == REDZONE_SLAB_POISON_OK);
    assert(p[0] == 0xA5U); // Freed payload was poisoned
    assert(redzone_slab_poison_free(&s, p) == REDZONE_SLAB_POISON_ERR_INVALID); // Double free rejected
    return 0;
}
