"""Specification for seL4 microkernel capability CNode slot routing policy order 1014."""

def spec_sel4_cnode_slot_1014() -> dict:
    return {"system": "seL4", "spec_id": 1014, "cap_rights": 0x07, "cnode_depth": 32, "badge": 246}

def test_spec_sel4_cnode_slot_1014():
    s = spec_sel4_cnode_slot_1014()
    assert s["spec_id"] == 1014
