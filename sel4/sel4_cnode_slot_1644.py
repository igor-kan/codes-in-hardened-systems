"""Specification for seL4 microkernel capability CNode slot routing policy order 1644."""

def spec_sel4_cnode_slot_1644() -> dict:
    return {"system": "seL4", "spec_id": 1644, "cap_rights": 0x07, "cnode_depth": 32, "badge": 108}

def test_spec_sel4_cnode_slot_1644():
    s = spec_sel4_cnode_slot_1644()
    assert s["spec_id"] == 1644
