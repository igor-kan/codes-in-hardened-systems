"""Specification for seL4 microkernel capability CNode slot routing policy order 108."""

def spec_sel4_cnode_slot_108() -> dict:
    return {"system": "seL4", "spec_id": 108, "cap_rights": 0x07, "cnode_depth": 32, "badge": 108}

def test_spec_sel4_cnode_slot_108():
    s = spec_sel4_cnode_slot_108()
    assert s["spec_id"] == 108
