"""Specification for seL4 microkernel capability CNode slot routing policy order 1020."""

def spec_sel4_cnode_slot_1020() -> dict:
    return {"system": "seL4", "spec_id": 1020, "cap_rights": 0x07, "cnode_depth": 32, "badge": 252}

def test_spec_sel4_cnode_slot_1020():
    s = spec_sel4_cnode_slot_1020()
    assert s["spec_id"] == 1020
