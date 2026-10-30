"""Specification for seL4 microkernel capability CNode slot routing policy order 1434."""

def spec_sel4_cnode_slot_1434() -> dict:
    return {"system": "seL4", "spec_id": 1434, "cap_rights": 0x07, "cnode_depth": 32, "badge": 154}

def test_spec_sel4_cnode_slot_1434():
    s = spec_sel4_cnode_slot_1434()
    assert s["spec_id"] == 1434
