#include "interface.h"
#include <assert.h>

int main(void) {
    audit_ledger_t a, b;
    audit_init(&a, 10ULL, 20ULL);
    audit_init(&b, 30ULL, 40ULL);
    for (uint64_t i = 0; i < 16; ++i) { audit_append(&a, i); audit_append(&b, i * 2); }
    audit_log_hash_chain_err_t res[2];
    parallel_verify_two_ledgers(&a, &b, res);
    assert(res[0] == AUDIT_LOG_HASH_CHAIN_OK && res[1] == AUDIT_LOG_HASH_CHAIN_OK);
    return 0;
}
