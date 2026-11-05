"""Specification for seL4 microkernel capability CNode slot routing policy order 1800."""

def spec_sel4_cnode_slot_1800() -> dict:
    return {"system": "seL4", "spec_id": 1800, "cap_rights": 0x07, "cnode_depth": 32, "badge": 8}

def test_spec_sel4_cnode_slot_1800():
    s = spec_sel4_cnode_slot_1800()
    assert s["spec_id"] == 1800
