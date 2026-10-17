"""Specification for seL4 microkernel capability CNode slot routing policy order 504."""

def spec_sel4_cnode_slot_504() -> dict:
    return {"system": "seL4", "spec_id": 504, "cap_rights": 0x07, "cnode_depth": 32, "badge": 248}

def test_spec_sel4_cnode_slot_504():
    s = spec_sel4_cnode_slot_504()
    assert s["spec_id"] == 504
