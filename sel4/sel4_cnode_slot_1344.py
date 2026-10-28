"""Specification for seL4 microkernel capability CNode slot routing policy order 1344."""

def spec_sel4_cnode_slot_1344() -> dict:
    return {"system": "seL4", "spec_id": 1344, "cap_rights": 0x07, "cnode_depth": 32, "badge": 64}

def test_spec_sel4_cnode_slot_1344():
    s = spec_sel4_cnode_slot_1344()
    assert s["spec_id"] == 1344
