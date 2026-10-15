"""Specification for seL4 microkernel capability CNode slot routing policy order 312."""

def spec_sel4_cnode_slot_312() -> dict:
    return {"system": "seL4", "spec_id": 312, "cap_rights": 0x07, "cnode_depth": 32, "badge": 56}

def test_spec_sel4_cnode_slot_312():
    s = spec_sel4_cnode_slot_312()
    assert s["spec_id"] == 312
