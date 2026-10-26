"""Specification for seL4 microkernel capability CNode slot routing policy order 1236."""

def spec_sel4_cnode_slot_1236() -> dict:
    return {"system": "seL4", "spec_id": 1236, "cap_rights": 0x07, "cnode_depth": 32, "badge": 212}

def test_spec_sel4_cnode_slot_1236():
    s = spec_sel4_cnode_slot_1236()
    assert s["spec_id"] == 1236
