"""Specification for seL4 microkernel capability CNode slot routing policy order 546."""

def spec_sel4_cnode_slot_546() -> dict:
    return {"system": "seL4", "spec_id": 546, "cap_rights": 0x07, "cnode_depth": 32, "badge": 34}

def test_spec_sel4_cnode_slot_546():
    s = spec_sel4_cnode_slot_546()
    assert s["spec_id"] == 546
