#include "interface.h"
#include <assert.h>

int main(void) {
    qslab_t s;
    qslab_init(&s);
    int32_t slots[10];
    for (int i = 0; i < 10; ++i) assert(qslab_alloc(&s, &slots[i]) == SLAB_POISON_QUARANTINE_OK);
    for (int i = 0; i < 10; ++i) assert(qslab_free(&s, slots[i]) == SLAB_POISON_QUARANTINE_OK);
    assert(qslab_parallel_audit(&s, 0, QSLAB_SLOTS) == 10);
    return 0;
}
