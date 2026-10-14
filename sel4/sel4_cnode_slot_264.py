"""Specification for seL4 microkernel capability CNode slot routing policy order 264."""

def spec_sel4_cnode_slot_264() -> dict:
    return {"system": "seL4", "spec_id": 264, "cap_rights": 0x07, "cnode_depth": 32, "badge": 8}

def test_spec_sel4_cnode_slot_264():
    s = spec_sel4_cnode_slot_264()
    assert s["spec_id"] == 264
