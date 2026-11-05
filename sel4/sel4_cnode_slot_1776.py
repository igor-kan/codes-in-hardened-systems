"""Specification for seL4 microkernel capability CNode slot routing policy order 1776."""

def spec_sel4_cnode_slot_1776() -> dict:
    return {"system": "seL4", "spec_id": 1776, "cap_rights": 0x07, "cnode_depth": 32, "badge": 240}

def test_spec_sel4_cnode_slot_1776():
    s = spec_sel4_cnode_slot_1776()
    assert s["spec_id"] == 1776
