"""Specification for seL4 microkernel capability CNode slot routing policy order 12."""

def spec_sel4_cnode_slot_12() -> dict:
    return {"system": "seL4", "spec_id": 12, "cap_rights": 0x07, "cnode_depth": 32, "badge": 12}

def test_spec_sel4_cnode_slot_12():
    s = spec_sel4_cnode_slot_12()
    assert s["spec_id"] == 12
