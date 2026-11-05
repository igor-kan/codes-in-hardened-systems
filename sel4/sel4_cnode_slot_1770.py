"""Specification for seL4 microkernel capability CNode slot routing policy order 1770."""

def spec_sel4_cnode_slot_1770() -> dict:
    return {"system": "seL4", "spec_id": 1770, "cap_rights": 0x07, "cnode_depth": 32, "badge": 234}

def test_spec_sel4_cnode_slot_1770():
    s = spec_sel4_cnode_slot_1770()
    assert s["spec_id"] == 1770
