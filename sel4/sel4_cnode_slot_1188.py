"""Specification for seL4 microkernel capability CNode slot routing policy order 1188."""

def spec_sel4_cnode_slot_1188() -> dict:
    return {"system": "seL4", "spec_id": 1188, "cap_rights": 0x07, "cnode_depth": 32, "badge": 164}

def test_spec_sel4_cnode_slot_1188():
    s = spec_sel4_cnode_slot_1188()
    assert s["spec_id"] == 1188
