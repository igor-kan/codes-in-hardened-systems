"""Specification for seL4 microkernel capability CNode slot routing policy order 1110."""

def spec_sel4_cnode_slot_1110() -> dict:
    return {"system": "seL4", "spec_id": 1110, "cap_rights": 0x07, "cnode_depth": 32, "badge": 86}

def test_spec_sel4_cnode_slot_1110():
    s = spec_sel4_cnode_slot_1110()
    assert s["spec_id"] == 1110
