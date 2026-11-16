#include "interface.h"

monotonic_rate_window_safe_err_t slim_init(safe_limiter_t* l, uint64_t cap, uint64_t rate_per_sec, uint64_t now_ns) {
    if (!l) return MONOTONIC_RATE_WINDOW_SAFE_ERR_NULL;
    if (cap == 0) return MONOTONIC_RATE_WINDOW_SAFE_ERR_BOUNDS;
    l->capacity = cap;
    l->tokens = cap;
    l->refill_per_sec = rate_per_sec;
    l->last_ns = now_ns;
    l->rem_ns = 0;
    return MONOTONIC_RATE_WINDOW_SAFE_OK;
}

void slim_refill(safe_limiter_t* l, uint64_t now_ns) {
    if (!l || now_ns <= l->last_ns) return; // Clock skew protection: ignore backward timestamps
    uint64_t elapsed = now_ns - l->last_ns;
    l->last_ns = now_ns;
    if (l->refill_per_sec == 0 || l->tokens >= l->capacity) {
        l->rem_ns = 0;
        return;
    }
    const uint64_t NS_PER_SEC = 1000000000ULL;
    uint64_t sec = elapsed / NS_PER_SEC;
    uint64_t rem = elapsed % NS_PER_SEC;
    uint64_t whole_add = (sec > UINT64_MAX / l->refill_per_sec) ? l->capacity : (sec * l->refill_per_sec);
    uint64_t frac_num = l->rem_ns + rem;
    if (frac_num >= NS_PER_SEC) {
        whole_add = (whole_add > l->capacity) ? l->capacity : (whole_add + l->refill_per_sec);
        frac_num -= NS_PER_SEC;
    }
    uint64_t extra = (frac_num <= UINT64_MAX / l->refill_per_sec)
        ? ((frac_num * l->refill_per_sec) / NS_PER_SEC)
        : l->capacity;
    uint64_t sum = l->tokens;
    if (whole_add >= l->capacity - sum) sum = l->capacity;
    else sum += whole_add;
    if (extra >= l->capacity - sum) sum = l->capacity;
    else sum += extra;
    l->tokens = sum;
    l->rem_ns = frac_num;
}

bool slim_allow(safe_limiter_t* l, uint64_t now_ns, uint64_t cost) {
    if (!l || cost == 0) return false;
    slim_refill(l, now_ns);
    if (l->tokens < cost) return false;
    l->tokens -= cost;
    return true;
}
