"""Specification for seL4 microkernel capability CNode slot routing policy order 36."""

def spec_sel4_cnode_slot_36() -> dict:
    return {"system": "seL4", "spec_id": 36, "cap_rights": 0x07, "cnode_depth": 32, "badge": 36}

def test_spec_sel4_cnode_slot_36():
    s = spec_sel4_cnode_slot_36()
    assert s["spec_id"] == 36
