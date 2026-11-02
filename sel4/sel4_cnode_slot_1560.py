"""Specification for seL4 microkernel capability CNode slot routing policy order 1560."""

def spec_sel4_cnode_slot_1560() -> dict:
    return {"system": "seL4", "spec_id": 1560, "cap_rights": 0x07, "cnode_depth": 32, "badge": 24}

def test_spec_sel4_cnode_slot_1560():
    s = spec_sel4_cnode_slot_1560()
    assert s["spec_id"] == 1560
