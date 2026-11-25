#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    assert(merkle_audit_verify_d60_validate_len(1) == MERKLE_AUDIT_VERIFY_D60_OK);
    uint64_t l0 = merkle_hash_leaf_d60(10ULL), l1 = merkle_hash_leaf_d60(20ULL);
    uint64_t l2 = merkle_hash_leaf_d60(30ULL), l3 = merkle_hash_leaf_d60(40ULL);
    uint64_t n01 = merkle_hash_node_d60(l0, l1), n23 = merkle_hash_node_d60(l2, l3);
    uint64_t root = merkle_hash_node_d60(n01, n23);
    merkle_proof_t pr; memset(&pr, 0, sizeof(pr));
    pr.depth = 2; pr.siblings[0] = l0; pr.directions[0] = 1;
    pr.siblings[1] = n23; pr.directions[1] = 0;
    assert(merkle_verify_proof_d60(root, 20ULL, &pr));
    assert(!merkle_verify_proof_d60(root, 21ULL, &pr));
    assert(merkle_audit_verify_d60_verify_guard(true) == MERKLE_AUDIT_VERIFY_D60_OK);
    return 0;
}
