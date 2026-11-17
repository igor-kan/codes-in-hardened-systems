#include "interface.h"
#include <pthread.h>

typedef struct { size_t bytes; int ok; } ar_arg_t;

static void* ar_worker(void* raw) {
    ar_arg_t* arg = (ar_arg_t*)raw;
    uint8_t backing[512];
    guarded_arena_t a;
    if (arena_init(&a, backing, sizeof(backing)) != BOUNDED_ARENA_SCRATCH_OK) { arg->ok = 0; return NULL; }
    void* p = arena_alloc_aligned(&a, arg->bytes, 16);
    arg->ok = (p != NULL && arena_check_canary(&a) == BOUNDED_ARENA_SCRATCH_OK) ? 1 : 0;
    return NULL;
}

void arena_parallel_smoke(size_t n_threads, size_t alloc_bytes, int* out_ok) {
    (void)n_threads;
    ar_arg_t args[2] = {{alloc_bytes, 0}, {alloc_bytes, 0}};
    pthread_t t1, t2;
    pthread_create(&t1, NULL, ar_worker, &args[0]);
    pthread_create(&t2, NULL, ar_worker, &args[1]);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    *out_ok = (args[0].ok && args[1].ok) ? 1 : 0;
}
