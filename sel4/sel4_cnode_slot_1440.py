"""Specification for seL4 microkernel capability CNode slot routing policy order 1440."""

def spec_sel4_cnode_slot_1440() -> dict:
    return {"system": "seL4", "spec_id": 1440, "cap_rights": 0x07, "cnode_depth": 32, "badge": 160}

def test_spec_sel4_cnode_slot_1440():
    s = spec_sel4_cnode_slot_1440()
    assert s["spec_id"] == 1440
