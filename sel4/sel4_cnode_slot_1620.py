"""Specification for seL4 microkernel capability CNode slot routing policy order 1620."""

def spec_sel4_cnode_slot_1620() -> dict:
    return {"system": "seL4", "spec_id": 1620, "cap_rights": 0x07, "cnode_depth": 32, "badge": 84}

def test_spec_sel4_cnode_slot_1620():
    s = spec_sel4_cnode_slot_1620()
    assert s["spec_id"] == 1620
