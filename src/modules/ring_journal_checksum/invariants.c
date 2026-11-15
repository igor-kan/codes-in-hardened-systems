#include "interface.h"
ring_journal_checksum_err_t ring_journal_checksum_audit_latest(const journal_ring_t* j) {
    if (!j) return RING_JOURNAL_CHECKSUM_ERR_NULL;
    if (j->next_seq <= 1) return RING_JOURNAL_CHECKSUM_OK;
    return ring_journal_checksum_verify_slot(j, j->next_seq - 1, NULL, NULL);
}
