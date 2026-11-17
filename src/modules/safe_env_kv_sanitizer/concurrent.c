#include "interface.h"
#include <pthread.h>

typedef struct { const char** r; const size_t* l; size_t lo; size_t hi; int* out; } kv_arg_t;

static void* kv_worker(void* raw) {
    kv_arg_t* a = (kv_arg_t*)raw;
    for (size_t i = a->lo; i < a->hi; ++i) a->out[i] = kv_parse_strict(a->r[i], a->l[i]).ok ? 1 : 0;
    return NULL;
}

void kv_parallel_filter(const char** recs, const size_t* lens, size_t n, int* out_ok) {
    size_t mid = n / 2;
    kv_arg_t args[2] = {{recs, lens, 0, mid, out_ok}, {recs, lens, mid, n, out_ok}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, kv_worker, &args[0]);
    pthread_create(&t2, NULL, kv_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
}
