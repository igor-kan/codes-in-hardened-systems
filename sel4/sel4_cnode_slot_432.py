"""Specification for seL4 microkernel capability CNode slot routing policy order 432."""

def spec_sel4_cnode_slot_432() -> dict:
    return {"system": "seL4", "spec_id": 432, "cap_rights": 0x07, "cnode_depth": 32, "badge": 176}

def test_spec_sel4_cnode_slot_432():
    s = spec_sel4_cnode_slot_432()
    assert s["spec_id"] == 432
