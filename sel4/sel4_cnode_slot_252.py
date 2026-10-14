"""Specification for seL4 microkernel capability CNode slot routing policy order 252."""

def spec_sel4_cnode_slot_252() -> dict:
    return {"system": "seL4", "spec_id": 252, "cap_rights": 0x07, "cnode_depth": 32, "badge": 252}

def test_spec_sel4_cnode_slot_252():
    s = spec_sel4_cnode_slot_252()
    assert s["spec_id"] == 252
