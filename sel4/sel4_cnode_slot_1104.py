"""Specification for seL4 microkernel capability CNode slot routing policy order 1104."""

def spec_sel4_cnode_slot_1104() -> dict:
    return {"system": "seL4", "spec_id": 1104, "cap_rights": 0x07, "cnode_depth": 32, "badge": 80}

def test_spec_sel4_cnode_slot_1104():
    s = spec_sel4_cnode_slot_1104()
    assert s["spec_id"] == 1104
