"""Specification for seL4 microkernel capability CNode slot routing policy order 1482."""

def spec_sel4_cnode_slot_1482() -> dict:
    return {"system": "seL4", "spec_id": 1482, "cap_rights": 0x07, "cnode_depth": 32, "badge": 202}

def test_spec_sel4_cnode_slot_1482():
    s = spec_sel4_cnode_slot_1482()
    assert s["spec_id"] == 1482
