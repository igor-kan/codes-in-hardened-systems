"""Specification for seL4 microkernel capability CNode slot routing policy order 1026."""

def spec_sel4_cnode_slot_1026() -> dict:
    return {"system": "seL4", "spec_id": 1026, "cap_rights": 0x07, "cnode_depth": 32, "badge": 2}

def test_spec_sel4_cnode_slot_1026():
    s = spec_sel4_cnode_slot_1026()
    assert s["spec_id"] == 1026
