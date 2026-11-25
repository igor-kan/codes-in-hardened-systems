#include "interface.h"
#include <assert.h>
#include <math.h>
#include <string.h>

int main(void) {
    uint64_t _pa[2] = {11ULL, 22ULL}, _pb[2] = {33ULL, 44ULL};
    assert(merkle_audit_verify_d60_parallel_fold_pair(_pa, 2, _pb, 2) != 0ULL);
    uint64_t leaf = merkle_hash_leaf_d60(99ULL);
    uint64_t sib = merkle_hash_leaf_d60(88ULL);
    uint64_t r = merkle_hash_node_d60(leaf, sib);
    merkle_proof_t pr; memset(&pr, 0, sizeof(pr));
    pr.depth = 1; pr.siblings[0] = sib; pr.directions[0] = 0;
    assert(merkle_verify_proof_d60(r, 99ULL, &pr));
    pr.directions[0] = 1;
    assert(!merkle_verify_proof_d60(r, 99ULL, &pr));
    return 0;
}
