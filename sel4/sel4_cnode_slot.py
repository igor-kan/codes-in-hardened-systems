"""Specification for seL4 microkernel capability CNode slot routing policy order 84."""

def spec_sel4_cnode_slot_84() -> dict:
    return {"system": "seL4", "spec_id": 84, "cap_rights": 0x07, "cnode_depth": 32, "badge": 84}

def test_spec_sel4_cnode_slot_84():
    s = spec_sel4_cnode_slot_84()
    assert s["spec_id"] == 84
