"""Specification for seL4 microkernel capability CNode slot routing policy order 306."""

def spec_sel4_cnode_slot_306() -> dict:
    return {"system": "seL4", "spec_id": 306, "cap_rights": 0x07, "cnode_depth": 32, "badge": 50}

def test_spec_sel4_cnode_slot_306():
    s = spec_sel4_cnode_slot_306()
    assert s["spec_id"] == 306
