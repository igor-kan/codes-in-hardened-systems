#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(journal_wal_torn_guard_validate_len(1) == JOURNAL_WAL_TORN_GUARD_OK);
    wal_frame_t f;
    const uint8_t msg[8] = {'C', 'O', 'M', 'M', 'I', 'T', '0', '1'};
    wal_seal_frame(&f, 42ULL, msg, 8);
    assert(wal_verify_frame(&f));
    f.trailer_lsn = 41ULL; /* simulate torn sector write */
    assert(!wal_verify_frame(&f));
    assert(journal_wal_torn_guard_verify_guard(true) == JOURNAL_WAL_TORN_GUARD_OK);
    return 0;
}
