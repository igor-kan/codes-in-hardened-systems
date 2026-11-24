#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(double_fence_pool_d59_validate_len(1) == DOUBLE_FENCE_POOL_D59_OK);
    gen_pool_t gp; gp_init(&gp);
    gen_handle_t h1 = {0,0}, h2 = {0,0};
    assert(gp_alloc(&gp, &h1) == 0 && gp_valid(&gp, h1) == 1);
    assert(gp_free(&gp, h1) == 0 && gp_valid(&gp, h1) == 0);
    assert(gp_alloc(&gp, &h2) == 0 && h2.slot == h1.slot && h2.gen != h1.gen);
    assert(gp_free(&gp, h1) == -1);
    assert(double_fence_pool_d59_verify_guard(true) == DOUBLE_FENCE_POOL_D59_OK);
    return 0;
}
