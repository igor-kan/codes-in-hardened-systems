"""Specification for seL4 microkernel capability CNode slot routing policy order 1338."""

def spec_sel4_cnode_slot_1338() -> dict:
    return {"system": "seL4", "spec_id": 1338, "cap_rights": 0x07, "cnode_depth": 32, "badge": 58}

def test_spec_sel4_cnode_slot_1338():
    s = spec_sel4_cnode_slot_1338()
    assert s["spec_id"] == 1338
