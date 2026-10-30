"""Specification for seL4 microkernel capability CNode slot routing policy order 1416."""

def spec_sel4_cnode_slot_1416() -> dict:
    return {"system": "seL4", "spec_id": 1416, "cap_rights": 0x07, "cnode_depth": 32, "badge": 136}

def test_spec_sel4_cnode_slot_1416():
    s = spec_sel4_cnode_slot_1416()
    assert s["spec_id"] == 1416
