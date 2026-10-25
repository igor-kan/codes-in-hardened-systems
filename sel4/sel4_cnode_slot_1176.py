"""Specification for seL4 microkernel capability CNode slot routing policy order 1176."""

def spec_sel4_cnode_slot_1176() -> dict:
    return {"system": "seL4", "spec_id": 1176, "cap_rights": 0x07, "cnode_depth": 32, "badge": 152}

def test_spec_sel4_cnode_slot_1176():
    s = spec_sel4_cnode_slot_1176()
    assert s["spec_id"] == 1176
