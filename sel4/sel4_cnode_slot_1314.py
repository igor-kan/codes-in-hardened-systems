"""Specification for seL4 microkernel capability CNode slot routing policy order 1314."""

def spec_sel4_cnode_slot_1314() -> dict:
    return {"system": "seL4", "spec_id": 1314, "cap_rights": 0x07, "cnode_depth": 32, "badge": 34}

def test_spec_sel4_cnode_slot_1314():
    s = spec_sel4_cnode_slot_1314()
    assert s["spec_id"] == 1314
