"""Specification for seL4 microkernel capability CNode slot routing policy order 1326."""

def spec_sel4_cnode_slot_1326() -> dict:
    return {"system": "seL4", "spec_id": 1326, "cap_rights": 0x07, "cnode_depth": 32, "badge": 46}

def test_spec_sel4_cnode_slot_1326():
    s = spec_sel4_cnode_slot_1326()
    assert s["spec_id"] == 1326
