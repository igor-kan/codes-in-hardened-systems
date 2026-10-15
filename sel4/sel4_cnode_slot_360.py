"""Specification for seL4 microkernel capability CNode slot routing policy order 360."""

def spec_sel4_cnode_slot_360() -> dict:
    return {"system": "seL4", "spec_id": 360, "cap_rights": 0x07, "cnode_depth": 32, "badge": 104}

def test_spec_sel4_cnode_slot_360():
    s = spec_sel4_cnode_slot_360()
    assert s["spec_id"] == 360
