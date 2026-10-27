"""Specification for seL4 microkernel capability CNode slot routing policy order 1272."""

def spec_sel4_cnode_slot_1272() -> dict:
    return {"system": "seL4", "spec_id": 1272, "cap_rights": 0x07, "cnode_depth": 32, "badge": 248}

def test_spec_sel4_cnode_slot_1272():
    s = spec_sel4_cnode_slot_1272()
    assert s["spec_id"] == 1272
