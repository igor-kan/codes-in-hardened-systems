"""Specification for seL4 microkernel capability CNode slot routing policy order 1464."""

def spec_sel4_cnode_slot_1464() -> dict:
    return {"system": "seL4", "spec_id": 1464, "cap_rights": 0x07, "cnode_depth": 32, "badge": 184}

def test_spec_sel4_cnode_slot_1464():
    s = spec_sel4_cnode_slot_1464()
    assert s["spec_id"] == 1464
