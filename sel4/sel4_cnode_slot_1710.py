"""Specification for seL4 microkernel capability CNode slot routing policy order 1710."""

def spec_sel4_cnode_slot_1710() -> dict:
    return {"system": "seL4", "spec_id": 1710, "cap_rights": 0x07, "cnode_depth": 32, "badge": 174}

def test_spec_sel4_cnode_slot_1710():
    s = spec_sel4_cnode_slot_1710()
    assert s["spec_id"] == 1710
