"""Specification for seL4 microkernel capability CNode slot routing policy order 414."""

def spec_sel4_cnode_slot_414() -> dict:
    return {"system": "seL4", "spec_id": 414, "cap_rights": 0x07, "cnode_depth": 32, "badge": 158}

def test_spec_sel4_cnode_slot_414():
    s = spec_sel4_cnode_slot_414()
    assert s["spec_id"] == 414
