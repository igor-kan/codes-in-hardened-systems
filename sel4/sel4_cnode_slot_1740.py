"""Specification for seL4 microkernel capability CNode slot routing policy order 1740."""

def spec_sel4_cnode_slot_1740() -> dict:
    return {"system": "seL4", "spec_id": 1740, "cap_rights": 0x07, "cnode_depth": 32, "badge": 204}

def test_spec_sel4_cnode_slot_1740():
    s = spec_sel4_cnode_slot_1740()
    assert s["spec_id"] == 1740
