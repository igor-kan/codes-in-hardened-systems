"""Specification for seL4 microkernel capability CNode slot routing policy order 1626."""

def spec_sel4_cnode_slot_1626() -> dict:
    return {"system": "seL4", "spec_id": 1626, "cap_rights": 0x07, "cnode_depth": 32, "badge": 90}

def test_spec_sel4_cnode_slot_1626():
    s = spec_sel4_cnode_slot_1626()
    assert s["spec_id"] == 1626
