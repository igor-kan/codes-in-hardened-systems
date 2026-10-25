"""Specification for seL4 microkernel capability CNode slot routing policy order 1158."""

def spec_sel4_cnode_slot_1158() -> dict:
    return {"system": "seL4", "spec_id": 1158, "cap_rights": 0x07, "cnode_depth": 32, "badge": 134}

def test_spec_sel4_cnode_slot_1158():
    s = spec_sel4_cnode_slot_1158()
    assert s["spec_id"] == 1158
