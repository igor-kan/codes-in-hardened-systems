#include "interface.h"
#include <math.h>
#include <string.h>

static uint64_t mix64(uint64_t z) {
    z = (z ^ (z >> 30)) * 0xbf58476d1ce4e5b9ULL;
    z = (z ^ (z >> 27)) * 0x94d049bb133111ebULL;
    return z ^ (z >> 31);
}
uint64_t merkle_hash_leaf_d60(uint64_t val) {
    return mix64(val ^ 0xa0a0a0a0a0a0a0a0ULL);
}
uint64_t merkle_hash_node_d60(uint64_t left, uint64_t right) {
    return mix64((left * 0x9e3779b97f4a7c15ULL) ^ mix64(right ^ 0x5151515151515151ULL));
}
bool merkle_verify_proof_d60(uint64_t root, uint64_t leaf_val, const merkle_proof_t* pr) {
    if (pr->depth > MERKLE_MAX_DEPTH) return false;
    uint64_t cur = merkle_hash_leaf_d60(leaf_val);
    for (size_t i = 0; i < pr->depth; ++i) {
        if (pr->directions[i] == 0U) cur = merkle_hash_node_d60(cur, pr->siblings[i]);
        else cur = merkle_hash_node_d60(pr->siblings[i], cur);
    }
    return cur == root;
}
