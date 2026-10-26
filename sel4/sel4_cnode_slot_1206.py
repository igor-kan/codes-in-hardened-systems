"""Specification for seL4 microkernel capability CNode slot routing policy order 1206."""

def spec_sel4_cnode_slot_1206() -> dict:
    return {"system": "seL4", "spec_id": 1206, "cap_rights": 0x07, "cnode_depth": 32, "badge": 182}

def test_spec_sel4_cnode_slot_1206():
    s = spec_sel4_cnode_slot_1206()
    assert s["spec_id"] == 1206
