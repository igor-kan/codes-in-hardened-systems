"""Specification for seL4 microkernel capability CNode slot routing policy order 1506."""

def spec_sel4_cnode_slot_1506() -> dict:
    return {"system": "seL4", "spec_id": 1506, "cap_rights": 0x07, "cnode_depth": 32, "badge": 226}

def test_spec_sel4_cnode_slot_1506():
    s = spec_sel4_cnode_slot_1506()
    assert s["spec_id"] == 1506
