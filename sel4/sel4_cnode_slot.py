"""Specification for seL4 microkernel capability CNode slot routing policy order 6."""

def spec_sel4_cnode_slot_6() -> dict:
    return {"system": "seL4", "spec_id": 6, "cap_rights": 0x07, "cnode_depth": 32, "badge": 6}

def test_spec_sel4_cnode_slot_6():
    s = spec_sel4_cnode_slot_6()
    assert s["spec_id"] == 6
