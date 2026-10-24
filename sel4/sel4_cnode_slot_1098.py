"""Specification for seL4 microkernel capability CNode slot routing policy order 1098."""

def spec_sel4_cnode_slot_1098() -> dict:
    return {"system": "seL4", "spec_id": 1098, "cap_rights": 0x07, "cnode_depth": 32, "badge": 74}

def test_spec_sel4_cnode_slot_1098():
    s = spec_sel4_cnode_slot_1098()
    assert s["spec_id"] == 1098
