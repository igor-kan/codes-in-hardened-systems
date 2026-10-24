"""Specification for seL4 microkernel capability CNode slot routing policy order 1116."""

def spec_sel4_cnode_slot_1116() -> dict:
    return {"system": "seL4", "spec_id": 1116, "cap_rights": 0x07, "cnode_depth": 32, "badge": 92}

def test_spec_sel4_cnode_slot_1116():
    s = spec_sel4_cnode_slot_1116()
    assert s["spec_id"] == 1116
