"""Specification for seL4 microkernel capability CNode slot routing policy order 1584."""

def spec_sel4_cnode_slot_1584() -> dict:
    return {"system": "seL4", "spec_id": 1584, "cap_rights": 0x07, "cnode_depth": 32, "badge": 48}

def test_spec_sel4_cnode_slot_1584():
    s = spec_sel4_cnode_slot_1584()
    assert s["spec_id"] == 1584
