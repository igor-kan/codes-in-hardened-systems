#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(monotonic_epoch_fencing_validate_len(1) == MONOTONIC_EPOCH_FENCING_OK);
    fenced_register_t reg; fenced_init(&reg, 10);
    assert(fenced_write(&reg, 12, 100));
    assert(!fenced_write(&reg, 11, 999)); /* stale zombie client */
    assert(reg.committed_value == 100 && reg.rejected_stale == 1);
    assert(monotonic_epoch_fencing_verify_guard(true) == MONOTONIC_EPOCH_FENCING_OK);
    return 0;
}
