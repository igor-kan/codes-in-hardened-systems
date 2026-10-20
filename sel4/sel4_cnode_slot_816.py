"""Specification for seL4 microkernel capability CNode slot routing policy order 816."""

def spec_sel4_cnode_slot_816() -> dict:
    return {"system": "seL4", "spec_id": 816, "cap_rights": 0x07, "cnode_depth": 32, "badge": 48}

def test_spec_sel4_cnode_slot_816():
    s = spec_sel4_cnode_slot_816()
    assert s["spec_id"] == 816
