#include "interface.h"
#include <assert.h>

int main(void) {
    assert(verify_arena_bounds() == BOUNDED_ARENA_SCRATCH_OK);
    return 0;
}
