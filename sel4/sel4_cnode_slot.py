"""Specification for seL4 microkernel capability CNode slot routing policy order 114."""

def spec_sel4_cnode_slot_114() -> dict:
    return {"system": "seL4", "spec_id": 114, "cap_rights": 0x07, "cnode_depth": 32, "badge": 114}

def test_spec_sel4_cnode_slot_114():
    s = spec_sel4_cnode_slot_114()
    assert s["spec_id"] == 114
