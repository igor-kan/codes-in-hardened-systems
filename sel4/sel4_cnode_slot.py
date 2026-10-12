"""Specification for seL4 microkernel capability CNode slot routing policy order 72."""

def spec_sel4_cnode_slot_72() -> dict:
    return {"system": "seL4", "spec_id": 72, "cap_rights": 0x07, "cnode_depth": 32, "badge": 72}

def test_spec_sel4_cnode_slot_72():
    s = spec_sel4_cnode_slot_72()
    assert s["spec_id"] == 72
