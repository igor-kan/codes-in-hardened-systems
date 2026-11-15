#include "interface.h"
#include <pthread.h>
static pthread_mutex_t g_wr_lock = PTHREAD_MUTEX_INITIALIZER;
safe_snprintf_writer_err_t safe_snprintf_writer_append_locked(safe_writer_t* w, const char* s) {
    pthread_mutex_lock(&g_wr_lock);
    safe_snprintf_writer_err_t e = safe_snprintf_writer_append_str(w, s);
    pthread_mutex_unlock(&g_wr_lock);
    return e;
}
