"""Specification for seL4 microkernel capability CNode slot routing policy order 180."""

def spec_sel4_cnode_slot_180() -> dict:
    return {"system": "seL4", "spec_id": 180, "cap_rights": 0x07, "cnode_depth": 32, "badge": 180}

def test_spec_sel4_cnode_slot_180():
    s = spec_sel4_cnode_slot_180()
    assert s["spec_id"] == 180
