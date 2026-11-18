#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint64_t* ptr;
    size_t len;
    uint64_t out;
} siphash13_keyed_cookie_task_t;

static void* siphash13_keyed_cookie_worker(void* raw) {
    siphash13_keyed_cookie_task_t* t = (siphash13_keyed_cookie_task_t*)raw;
    t->out = siphash13_keyed_cookie_fast_fold_u64(t->ptr, t->len);
    return NULL;
}

uint64_t siphash13_keyed_cookie_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb) {
    siphash13_keyed_cookie_task_t ta = {a, na, 0};
    siphash13_keyed_cookie_task_t tb = {b, nb, 0};
    pthread_t th1, th2;
    pthread_create(&th1, NULL, siphash13_keyed_cookie_worker, &ta);
    pthread_create(&th2, NULL, siphash13_keyed_cookie_worker, &tb);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return ta.out ^ tb.out;
}
