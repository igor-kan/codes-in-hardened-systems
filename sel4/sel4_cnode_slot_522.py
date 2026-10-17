"""Specification for seL4 microkernel capability CNode slot routing policy order 522."""

def spec_sel4_cnode_slot_522() -> dict:
    return {"system": "seL4", "spec_id": 522, "cap_rights": 0x07, "cnode_depth": 32, "badge": 10}

def test_spec_sel4_cnode_slot_522():
    s = spec_sel4_cnode_slot_522()
    assert s["spec_id"] == 522
