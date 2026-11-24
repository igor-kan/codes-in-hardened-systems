#include "interface.h"
#include <math.h>
#include <string.h>

void gp_init(gen_pool_t *p) {
    for (int i = 0; i < 16; ++i) { p->gens[i] = 1; p->used[i] = 0; }
}

int gp_alloc(gen_pool_t *p, gen_handle_t *h) {
    for (uint16_t i = 0; i < 16; ++i) {
        if (!p->used[i]) {
            p->used[i] = 1;
            h->slot = i; h->gen = p->gens[i];
            return 0;
        }
    }
    return -1;
}

int gp_valid(const gen_pool_t *p, gen_handle_t h) {
    if (h.slot >= 16) return 0;
    return (p->used[h.slot] && p->gens[h.slot] == h.gen) ? 1 : 0;
}

int gp_free(gen_pool_t *p, gen_handle_t h) {
    if (!gp_valid(p, h)) return -1;
    p->used[h.slot] = 0;
    p->gens[h.slot]++;
    return 0;
}
