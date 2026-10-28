"""Specification for seL4 microkernel capability CNode slot routing policy order 1368."""

def spec_sel4_cnode_slot_1368() -> dict:
    return {"system": "seL4", "spec_id": 1368, "cap_rights": 0x07, "cnode_depth": 32, "badge": 88}

def test_spec_sel4_cnode_slot_1368():
    s = spec_sel4_cnode_slot_1368()
    assert s["spec_id"] == 1368
