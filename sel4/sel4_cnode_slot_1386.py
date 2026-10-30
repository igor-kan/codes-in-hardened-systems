"""Specification for seL4 microkernel capability CNode slot routing policy order 1386."""

def spec_sel4_cnode_slot_1386() -> dict:
    return {"system": "seL4", "spec_id": 1386, "cap_rights": 0x07, "cnode_depth": 32, "badge": 106}

def test_spec_sel4_cnode_slot_1386():
    s = spec_sel4_cnode_slot_1386()
    assert s["spec_id"] == 1386
