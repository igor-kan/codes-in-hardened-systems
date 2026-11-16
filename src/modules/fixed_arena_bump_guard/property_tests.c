#include "interface.h"
#include <assert.h>

int main(void) {
    assert(garena_mt_scratch_test(4) == FIXED_ARENA_BUMP_GUARD_OK);
    return 0;
}
