#include "interface.h"
#include <pthread.h>
static pthread_mutex_t g_j_lock = PTHREAD_MUTEX_INITIALIZER;
ring_journal_checksum_err_t ring_journal_checksum_append_locked(journal_ring_t* j, const uint8_t* payload, size_t len) {
    pthread_mutex_lock(&g_j_lock);
    ring_journal_checksum_err_t e = ring_journal_checksum_append(j, payload, len);
    pthread_mutex_unlock(&g_j_lock);
    return e;
}
