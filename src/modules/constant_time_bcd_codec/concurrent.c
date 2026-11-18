#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint64_t* ptr;
    size_t len;
    uint64_t out;
} constant_time_bcd_codec_task_t;

static void* constant_time_bcd_codec_worker(void* raw) {
    constant_time_bcd_codec_task_t* t = (constant_time_bcd_codec_task_t*)raw;
    t->out = constant_time_bcd_codec_fast_fold_u64(t->ptr, t->len);
    return NULL;
}

uint64_t constant_time_bcd_codec_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb) {
    constant_time_bcd_codec_task_t ta = {a, na, 0};
    constant_time_bcd_codec_task_t tb = {b, nb, 0};
    pthread_t th1, th2;
    pthread_create(&th1, NULL, constant_time_bcd_codec_worker, &ta);
    pthread_create(&th2, NULL, constant_time_bcd_codec_worker, &tb);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return ta.out ^ tb.out;
}
