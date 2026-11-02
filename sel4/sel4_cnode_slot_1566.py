"""Specification for seL4 microkernel capability CNode slot routing policy order 1566."""

def spec_sel4_cnode_slot_1566() -> dict:
    return {"system": "seL4", "spec_id": 1566, "cap_rights": 0x07, "cnode_depth": 32, "badge": 30}

def test_spec_sel4_cnode_slot_1566():
    s = spec_sel4_cnode_slot_1566()
    assert s["spec_id"] == 1566
