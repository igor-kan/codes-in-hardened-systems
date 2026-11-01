"""Specification for seL4 microkernel capability CNode slot routing policy order 1524."""

def spec_sel4_cnode_slot_1524() -> dict:
    return {"system": "seL4", "spec_id": 1524, "cap_rights": 0x07, "cnode_depth": 32, "badge": 244}

def test_spec_sel4_cnode_slot_1524():
    s = spec_sel4_cnode_slot_1524()
    assert s["spec_id"] == 1524
