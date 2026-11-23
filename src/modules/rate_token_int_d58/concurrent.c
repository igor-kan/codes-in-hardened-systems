#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint64_t* ptr;
    size_t len;
    uint64_t out;
} rate_token_int_d58_task_t;

static void* rate_token_int_d58_worker(void* raw) {
    rate_token_int_d58_task_t* t = (rate_token_int_d58_task_t*)raw;
    t->out = rate_token_int_d58_fast_fold_u64(t->ptr, t->len);
    return NULL;
}

uint64_t rate_token_int_d58_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb) {
    rate_token_int_d58_task_t ta = {a, na, 0};
    rate_token_int_d58_task_t tb = {b, nb, 0};
    pthread_t th1, th2;
    pthread_create(&th1, NULL, rate_token_int_d58_worker, &ta);
    pthread_create(&th2, NULL, rate_token_int_d58_worker, &tb);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return ta.out ^ tb.out;
}
