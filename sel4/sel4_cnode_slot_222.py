"""Specification for seL4 microkernel capability CNode slot routing policy order 222."""

def spec_sel4_cnode_slot_222() -> dict:
    return {"system": "seL4", "spec_id": 222, "cap_rights": 0x07, "cnode_depth": 32, "badge": 222}

def test_spec_sel4_cnode_slot_222():
    s = spec_sel4_cnode_slot_222()
    assert s["spec_id"] == 222
