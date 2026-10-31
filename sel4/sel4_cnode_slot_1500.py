"""Specification for seL4 microkernel capability CNode slot routing policy order 1500."""

def spec_sel4_cnode_slot_1500() -> dict:
    return {"system": "seL4", "spec_id": 1500, "cap_rights": 0x07, "cnode_depth": 32, "badge": 220}

def test_spec_sel4_cnode_slot_1500():
    s = spec_sel4_cnode_slot_1500()
    assert s["spec_id"] == 1500
