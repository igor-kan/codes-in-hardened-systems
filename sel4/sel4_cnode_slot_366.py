"""Specification for seL4 microkernel capability CNode slot routing policy order 366."""

def spec_sel4_cnode_slot_366() -> dict:
    return {"system": "seL4", "spec_id": 366, "cap_rights": 0x07, "cnode_depth": 32, "badge": 110}

def test_spec_sel4_cnode_slot_366():
    s = spec_sel4_cnode_slot_366()
    assert s["spec_id"] == 366
