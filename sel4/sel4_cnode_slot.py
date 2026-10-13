"""Specification for seL4 microkernel capability CNode slot routing policy order 156."""

def spec_sel4_cnode_slot_156() -> dict:
    return {"system": "seL4", "spec_id": 156, "cap_rights": 0x07, "cnode_depth": 32, "badge": 156}

def test_spec_sel4_cnode_slot_156():
    s = spec_sel4_cnode_slot_156()
    assert s["spec_id"] == 156
