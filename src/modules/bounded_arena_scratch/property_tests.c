#include "interface.h"
#include <assert.h>

int main(void) {
    int ok = 0;
    arena_parallel_smoke(2, 128, &ok);
    assert(ok == 1);
    return 0;
}
