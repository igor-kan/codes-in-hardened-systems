#include "interface.h"
#include <pthread.h>

typedef struct {
    const uint64_t* ptr;
    size_t len;
    uint64_t out;
} strict_cidr_acl_matcher_task_t;

static void* strict_cidr_acl_matcher_worker(void* raw) {
    strict_cidr_acl_matcher_task_t* t = (strict_cidr_acl_matcher_task_t*)raw;
    t->out = strict_cidr_acl_matcher_fast_fold_u64(t->ptr, t->len);
    return NULL;
}

uint64_t strict_cidr_acl_matcher_parallel_fold_pair(const uint64_t* a, size_t na, const uint64_t* b, size_t nb) {
    strict_cidr_acl_matcher_task_t ta = {a, na, 0};
    strict_cidr_acl_matcher_task_t tb = {b, nb, 0};
    pthread_t th1, th2;
    pthread_create(&th1, NULL, strict_cidr_acl_matcher_worker, &ta);
    pthread_create(&th2, NULL, strict_cidr_acl_matcher_worker, &tb);
    pthread_join(th1, NULL);
    pthread_join(th2, NULL);
    return ta.out ^ tb.out;
}
