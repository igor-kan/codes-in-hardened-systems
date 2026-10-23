"""Specification for seL4 microkernel capability CNode slot routing policy order 1050."""

def spec_sel4_cnode_slot_1050() -> dict:
    return {"system": "seL4", "spec_id": 1050, "cap_rights": 0x07, "cnode_depth": 32, "badge": 26}

def test_spec_sel4_cnode_slot_1050():
    s = spec_sel4_cnode_slot_1050()
    assert s["spec_id"] == 1050
