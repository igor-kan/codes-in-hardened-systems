"""Specification for seL4 microkernel capability CNode slot routing policy order 810."""

def spec_sel4_cnode_slot_810() -> dict:
    return {"system": "seL4", "spec_id": 810, "cap_rights": 0x07, "cnode_depth": 32, "badge": 42}

def test_spec_sel4_cnode_slot_810():
    s = spec_sel4_cnode_slot_810()
    assert s["spec_id"] == 810
