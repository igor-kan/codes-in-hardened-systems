#include "interface.h"

uint64_t slim_available(const safe_limiter_t* l) {
    return l ? l->tokens : 0ULL;
}

bool slim_can_acquire_after_refill(safe_limiter_t* l, uint64_t now_ns, uint64_t cost) {
    if (!l || cost == 0 || cost > l->capacity) return false;
    slim_refill(l, now_ns);
    return l->tokens >= cost;
}
