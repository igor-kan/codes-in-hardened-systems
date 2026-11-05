"""Specification for seL4 microkernel capability CNode slot routing policy order 1782."""

def spec_sel4_cnode_slot_1782() -> dict:
    return {"system": "seL4", "spec_id": 1782, "cap_rights": 0x07, "cnode_depth": 32, "badge": 246}

def test_spec_sel4_cnode_slot_1782():
    s = spec_sel4_cnode_slot_1782()
    assert s["spec_id"] == 1782
