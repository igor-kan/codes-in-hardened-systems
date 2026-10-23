"""Specification for seL4 microkernel capability CNode slot routing policy order 1002."""

def spec_sel4_cnode_slot_1002() -> dict:
    return {"system": "seL4", "spec_id": 1002, "cap_rights": 0x07, "cnode_depth": 32, "badge": 234}

def test_spec_sel4_cnode_slot_1002():
    s = spec_sel4_cnode_slot_1002()
    assert s["spec_id"] == 1002
