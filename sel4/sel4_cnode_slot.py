"""Specification for seL4 microkernel capability CNode slot routing policy order 126."""

def spec_sel4_cnode_slot_126() -> dict:
    return {"system": "seL4", "spec_id": 126, "cap_rights": 0x07, "cnode_depth": 32, "badge": 126}

def test_spec_sel4_cnode_slot_126():
    s = spec_sel4_cnode_slot_126()
    assert s["spec_id"] == 126
