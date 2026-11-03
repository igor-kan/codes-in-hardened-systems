"""Specification for seL4 microkernel capability CNode slot routing policy order 1662."""

def spec_sel4_cnode_slot_1662() -> dict:
    return {"system": "seL4", "spec_id": 1662, "cap_rights": 0x07, "cnode_depth": 32, "badge": 126}

def test_spec_sel4_cnode_slot_1662():
    s = spec_sel4_cnode_slot_1662()
    assert s["spec_id"] == 1662
