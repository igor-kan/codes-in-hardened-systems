#include "interface.h"
#include <assert.h>

int main(void) {
    qslab_t s;
    qslab_init(&s);
    int32_t a = -1, b = -1;
    assert(qslab_alloc(&s, &a) == SLAB_POISON_QUARANTINE_OK);
    assert(qslab_free(&s, a) == SLAB_POISON_QUARANTINE_OK);
    assert(qslab_free(&s, a) == SLAB_POISON_QUARANTINE_ERR_INVALID); // double-free blocked
    assert(qslab_alloc(&s, &b) == SLAB_POISON_QUARANTINE_OK);
    assert(b != a); // quarantined slot not immediately reused
    assert(qslab_verify_poisoned(&s) == SLAB_POISON_QUARANTINE_OK);
    return 0;
}
