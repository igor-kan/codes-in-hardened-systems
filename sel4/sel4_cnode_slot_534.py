"""Specification for seL4 microkernel capability CNode slot routing policy order 534."""

def spec_sel4_cnode_slot_534() -> dict:
    return {"system": "seL4", "spec_id": 534, "cap_rights": 0x07, "cnode_depth": 32, "badge": 22}

def test_spec_sel4_cnode_slot_534():
    s = spec_sel4_cnode_slot_534()
    assert s["spec_id"] == 534
