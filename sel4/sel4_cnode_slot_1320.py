"""Specification for seL4 microkernel capability CNode slot routing policy order 1320."""

def spec_sel4_cnode_slot_1320() -> dict:
    return {"system": "seL4", "spec_id": 1320, "cap_rights": 0x07, "cnode_depth": 32, "badge": 40}

def test_spec_sel4_cnode_slot_1320():
    s = spec_sel4_cnode_slot_1320()
    assert s["spec_id"] == 1320
