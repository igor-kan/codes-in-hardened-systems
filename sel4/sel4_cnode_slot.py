"""Specification for seL4 microkernel capability CNode slot routing policy order 66."""

def spec_sel4_cnode_slot_66() -> dict:
    return {"system": "seL4", "spec_id": 66, "cap_rights": 0x07, "cnode_depth": 32, "badge": 66}

def test_spec_sel4_cnode_slot_66():
    s = spec_sel4_cnode_slot_66()
    assert s["spec_id"] == 66
