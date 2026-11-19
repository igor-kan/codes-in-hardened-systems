#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint64_t* ptr;
    size_t len;
    uint64_t out;
} arena_bump_watermark_c_task_t;

static void* arena_bump_watermark_c_worker(void* raw) {
    arena_bump_watermark_c_task_t* t = (arena_bump_watermark_c_task_t*)raw;
    t->out = arena_bump_watermark_c_fast_fold_u64(t->ptr, t->len);
    return NULL;
}

uint64_t arena_bump_watermark_c_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb) {
    arena_bump_watermark_c_task_t ta = {a, na, 0};
    arena_bump_watermark_c_task_t tb = {b, nb, 0};
    pthread_t th1, th2;
    pthread_create(&th1, NULL, arena_bump_watermark_c_worker, &ta);
    pthread_create(&th2, NULL, arena_bump_watermark_c_worker, &tb);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return ta.out ^ tb.out;
}
