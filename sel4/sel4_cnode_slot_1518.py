"""Specification for seL4 microkernel capability CNode slot routing policy order 1518."""

def spec_sel4_cnode_slot_1518() -> dict:
    return {"system": "seL4", "spec_id": 1518, "cap_rights": 0x07, "cnode_depth": 32, "badge": 238}

def test_spec_sel4_cnode_slot_1518():
    s = spec_sel4_cnode_slot_1518()
    assert s["spec_id"] == 1518
