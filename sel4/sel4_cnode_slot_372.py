"""Specification for seL4 microkernel capability CNode slot routing policy order 372."""

def spec_sel4_cnode_slot_372() -> dict:
    return {"system": "seL4", "spec_id": 372, "cap_rights": 0x07, "cnode_depth": 32, "badge": 116}

def test_spec_sel4_cnode_slot_372():
    s = spec_sel4_cnode_slot_372()
    assert s["spec_id"] == 372
