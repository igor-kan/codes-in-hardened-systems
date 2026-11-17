#include "interface.h"
#include <assert.h>

int main(void) {
    assert(audit_verify_tamper_detection() == AUDIT_LOG_HASH_CHAIN_OK);
    return 0;
}
