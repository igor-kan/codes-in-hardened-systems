"""Specification for seL4 microkernel capability CNode slot routing policy order 1194."""

def spec_sel4_cnode_slot_1194() -> dict:
    return {"system": "seL4", "spec_id": 1194, "cap_rights": 0x07, "cnode_depth": 32, "badge": 170}

def test_spec_sel4_cnode_slot_1194():
    s = spec_sel4_cnode_slot_1194()
    assert s["spec_id"] == 1194
