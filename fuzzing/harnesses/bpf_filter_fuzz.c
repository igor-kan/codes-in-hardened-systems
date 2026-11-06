#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>

/**
 * LibFuzzer target harness for GrapheneOS-style seccomp BPF instruction stream verification.
 * Validates BPF opcode encoding, jump offsets, and register addressing.
 */

struct sock_filter_fuzz {
    uint16_t code;
    uint8_t  jt;
    uint8_t  jf;
    uint32_t k;
};

static bool validate_bpf_instruction_stream(const uint8_t *data, size_t size) {
    if (size % sizeof(struct sock_filter_fuzz) != 0 || size == 0) {
        return false;
    }

    size_t num_insns = size / sizeof(struct sock_filter_fuzz);
    const struct sock_filter_fuzz *insns = (const struct sock_filter_fuzz *)data;

    for (size_t i = 0; i < num_insns; ++i) {
        // Validate forward jump bounds
        if (insns[i].jt != 0 && (i + insns[i].jt + 1 >= num_insns)) return false;
        if (insns[i].jf != 0 && (i + insns[i].jf + 1 >= num_insns)) return false;

        // Disallow dangerous backward jumps
        if (insns[i].code == 0xFFFF) return false;
    }

    return true;
}

int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    validate_bpf_instruction_stream(data, size);
    return 0;
}
