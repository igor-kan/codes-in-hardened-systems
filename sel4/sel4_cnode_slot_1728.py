"""Specification for seL4 microkernel capability CNode slot routing policy order 1728."""

def spec_sel4_cnode_slot_1728() -> dict:
    return {"system": "seL4", "spec_id": 1728, "cap_rights": 0x07, "cnode_depth": 32, "badge": 192}

def test_spec_sel4_cnode_slot_1728():
    s = spec_sel4_cnode_slot_1728()
    assert s["spec_id"] == 1728
