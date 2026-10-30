"""Specification for seL4 microkernel capability CNode slot routing policy order 1404."""

def spec_sel4_cnode_slot_1404() -> dict:
    return {"system": "seL4", "spec_id": 1404, "cap_rights": 0x07, "cnode_depth": 32, "badge": 124}

def test_spec_sel4_cnode_slot_1404():
    s = spec_sel4_cnode_slot_1404()
    assert s["spec_id"] == 1404
