#include "interface.h"
#include <pthread.h>

typedef struct { const q16_t* a; const q16_t* b; size_t lo; size_t hi; int64_t part; } dot_arg_t;

static void* dot_worker(void* raw) {
    dot_arg_t* arg = (dot_arg_t*)raw;
    int64_t acc = 0;
    for (size_t i = arg->lo; i < arg->hi; ++i) {
        q16_t prod = 0;
        if (q16_mul_checked(arg->a[i], arg->b[i], &prod) == CHECKED_FIXEDPOINT_Q16_OK) acc += prod;
    }
    arg->part = acc;
    return NULL;
}

void q16_parallel_dot(const q16_t* a, const q16_t* b, size_t n, int64_t* out_sum) {
    size_t mid = n / 2;
    dot_arg_t args[2] = {{a, b, 0, mid, 0}, {a, b, mid, n, 0}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, dot_worker, &args[0]);
    pthread_create(&t2, NULL, dot_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    *out_sum = args[0].part + args[1].part;
}
