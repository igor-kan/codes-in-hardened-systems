"""Specification for seL4 microkernel capability CNode slot routing policy order 1122."""

def spec_sel4_cnode_slot_1122() -> dict:
    return {"system": "seL4", "spec_id": 1122, "cap_rights": 0x07, "cnode_depth": 32, "badge": 98}

def test_spec_sel4_cnode_slot_1122():
    s = spec_sel4_cnode_slot_1122()
    assert s["spec_id"] == 1122
