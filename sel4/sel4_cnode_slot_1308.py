"""Specification for seL4 microkernel capability CNode slot routing policy order 1308."""

def spec_sel4_cnode_slot_1308() -> dict:
    return {"system": "seL4", "spec_id": 1308, "cap_rights": 0x07, "cnode_depth": 32, "badge": 28}

def test_spec_sel4_cnode_slot_1308():
    s = spec_sel4_cnode_slot_1308()
    assert s["spec_id"] == 1308
