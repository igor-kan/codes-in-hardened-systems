"""Specification for seL4 microkernel capability CNode slot routing policy order 936."""

def spec_sel4_cnode_slot_936() -> dict:
    return {"system": "seL4", "spec_id": 936, "cap_rights": 0x07, "cnode_depth": 32, "badge": 168}

def test_spec_sel4_cnode_slot_936():
    s = spec_sel4_cnode_slot_936()
    assert s["spec_id"] == 936
