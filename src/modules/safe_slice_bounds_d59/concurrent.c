#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint64_t* ptr;
    size_t len;
    uint64_t out;
} safe_slice_bounds_d59_task_t;

static void* safe_slice_bounds_d59_worker(void* raw) {
    safe_slice_bounds_d59_task_t* t = (safe_slice_bounds_d59_task_t*)raw;
    t->out = safe_slice_bounds_d59_fast_fold_u64(t->ptr, t->len);
    return NULL;
}

uint64_t safe_slice_bounds_d59_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb) {
    safe_slice_bounds_d59_task_t ta = {a, na, 0};
    safe_slice_bounds_d59_task_t tb = {b, nb, 0};
    pthread_t th1, th2;
    pthread_create(&th1, NULL, safe_slice_bounds_d59_worker, &ta);
    pthread_create(&th2, NULL, safe_slice_bounds_d59_worker, &tb);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return ta.out ^ tb.out;
}
