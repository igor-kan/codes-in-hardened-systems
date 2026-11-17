#include "interface.h"
#include <pthread.h>

typedef struct { const qslab_t* s; size_t lo; size_t hi; size_t ok_cnt; } qs_arg_t;

static void* qs_worker(void* raw) {
    qs_arg_t* a = (qs_arg_t*)raw;
    size_t ok = 0;
    for (size_t i = a->lo; i < a->hi; ++i) {
        if (a->s->state[i] == 2) {
            bool clean = true;
            for (size_t b = 0; b < QSLAB_BLK; ++b) {
                if (a->s->mem[i][b] != QSLAB_POISON) clean = false;
            }
            if (clean) ++ok;
        }
    }
    a->ok_cnt = ok;
    return NULL;
}

size_t qslab_parallel_audit(const qslab_t* s, size_t lo, size_t hi) {
    size_t mid = lo + (hi - lo) / 2;
    qs_arg_t args[2] = {{s, lo, mid, 0}, {s, mid, hi, 0}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, qs_worker, &args[0]);
    pthread_create(&t2, NULL, qs_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return args[0].ok_cnt + args[1].ok_cnt;
}
