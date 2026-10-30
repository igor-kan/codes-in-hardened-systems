"""Specification for seL4 microkernel capability CNode slot routing policy order 1398."""

def spec_sel4_cnode_slot_1398() -> dict:
    return {"system": "seL4", "spec_id": 1398, "cap_rights": 0x07, "cnode_depth": 32, "badge": 118}

def test_spec_sel4_cnode_slot_1398():
    s = spec_sel4_cnode_slot_1398()
    assert s["spec_id"] == 1398
