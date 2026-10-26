"""Specification for seL4 microkernel capability CNode slot routing policy order 1230."""

def spec_sel4_cnode_slot_1230() -> dict:
    return {"system": "seL4", "spec_id": 1230, "cap_rights": 0x07, "cnode_depth": 32, "badge": 206}

def test_spec_sel4_cnode_slot_1230():
    s = spec_sel4_cnode_slot_1230()
    assert s["spec_id"] == 1230
