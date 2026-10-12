"""Specification for seL4 microkernel capability CNode slot routing policy order 60."""

def spec_sel4_cnode_slot_60() -> dict:
    return {"system": "seL4", "spec_id": 60, "cap_rights": 0x07, "cnode_depth": 32, "badge": 60}

def test_spec_sel4_cnode_slot_60():
    s = spec_sel4_cnode_slot_60()
    assert s["spec_id"] == 60
