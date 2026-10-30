"""Specification for seL4 microkernel capability CNode slot routing policy order 1410."""

def spec_sel4_cnode_slot_1410() -> dict:
    return {"system": "seL4", "spec_id": 1410, "cap_rights": 0x07, "cnode_depth": 32, "badge": 130}

def test_spec_sel4_cnode_slot_1410():
    s = spec_sel4_cnode_slot_1410()
    assert s["spec_id"] == 1410
