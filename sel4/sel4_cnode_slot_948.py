"""Specification for seL4 microkernel capability CNode slot routing policy order 948."""

def spec_sel4_cnode_slot_948() -> dict:
    return {"system": "seL4", "spec_id": 948, "cap_rights": 0x07, "cnode_depth": 32, "badge": 180}

def test_spec_sel4_cnode_slot_948():
    s = spec_sel4_cnode_slot_948()
    assert s["spec_id"] == 948
