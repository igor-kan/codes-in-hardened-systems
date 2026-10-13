"""Specification for seL4 microkernel capability CNode slot routing policy order 132."""

def spec_sel4_cnode_slot_132() -> dict:
    return {"system": "seL4", "spec_id": 132, "cap_rights": 0x07, "cnode_depth": 32, "badge": 132}

def test_spec_sel4_cnode_slot_132():
    s = spec_sel4_cnode_slot_132()
    assert s["spec_id"] == 132
