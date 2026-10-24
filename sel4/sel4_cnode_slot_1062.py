"""Specification for seL4 microkernel capability CNode slot routing policy order 1062."""

def spec_sel4_cnode_slot_1062() -> dict:
    return {"system": "seL4", "spec_id": 1062, "cap_rights": 0x07, "cnode_depth": 32, "badge": 38}

def test_spec_sel4_cnode_slot_1062():
    s = spec_sel4_cnode_slot_1062()
    assert s["spec_id"] == 1062
