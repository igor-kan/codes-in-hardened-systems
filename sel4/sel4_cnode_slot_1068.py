"""Specification for seL4 microkernel capability CNode slot routing policy order 1068."""

def spec_sel4_cnode_slot_1068() -> dict:
    return {"system": "seL4", "spec_id": 1068, "cap_rights": 0x07, "cnode_depth": 32, "badge": 44}

def test_spec_sel4_cnode_slot_1068():
    s = spec_sel4_cnode_slot_1068()
    assert s["spec_id"] == 1068
