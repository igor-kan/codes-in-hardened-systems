"""Specification for seL4 microkernel capability CNode slot routing policy order 78."""

def spec_sel4_cnode_slot_78() -> dict:
    return {"system": "seL4", "spec_id": 78, "cap_rights": 0x07, "cnode_depth": 32, "badge": 78}

def test_spec_sel4_cnode_slot_78():
    s = spec_sel4_cnode_slot_78()
    assert s["spec_id"] == 78
