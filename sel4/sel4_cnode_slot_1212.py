"""Specification for seL4 microkernel capability CNode slot routing policy order 1212."""

def spec_sel4_cnode_slot_1212() -> dict:
    return {"system": "seL4", "spec_id": 1212, "cap_rights": 0x07, "cnode_depth": 32, "badge": 188}

def test_spec_sel4_cnode_slot_1212():
    s = spec_sel4_cnode_slot_1212()
    assert s["spec_id"] == 1212
