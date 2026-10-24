"""Specification for seL4 microkernel capability CNode slot routing policy order 1086."""

def spec_sel4_cnode_slot_1086() -> dict:
    return {"system": "seL4", "spec_id": 1086, "cap_rights": 0x07, "cnode_depth": 32, "badge": 62}

def test_spec_sel4_cnode_slot_1086():
    s = spec_sel4_cnode_slot_1086()
    assert s["spec_id"] == 1086
