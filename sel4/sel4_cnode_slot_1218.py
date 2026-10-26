"""Specification for seL4 microkernel capability CNode slot routing policy order 1218."""

def spec_sel4_cnode_slot_1218() -> dict:
    return {"system": "seL4", "spec_id": 1218, "cap_rights": 0x07, "cnode_depth": 32, "badge": 194}

def test_spec_sel4_cnode_slot_1218():
    s = spec_sel4_cnode_slot_1218()
    assert s["spec_id"] == 1218
