"""Specification for seL4 microkernel capability CNode slot routing policy order 1182."""

def spec_sel4_cnode_slot_1182() -> dict:
    return {"system": "seL4", "spec_id": 1182, "cap_rights": 0x07, "cnode_depth": 32, "badge": 158}

def test_spec_sel4_cnode_slot_1182():
    s = spec_sel4_cnode_slot_1182()
    assert s["spec_id"] == 1182
