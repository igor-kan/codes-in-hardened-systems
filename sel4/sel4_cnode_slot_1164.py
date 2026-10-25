"""Specification for seL4 microkernel capability CNode slot routing policy order 1164."""

def spec_sel4_cnode_slot_1164() -> dict:
    return {"system": "seL4", "spec_id": 1164, "cap_rights": 0x07, "cnode_depth": 32, "badge": 140}

def test_spec_sel4_cnode_slot_1164():
    s = spec_sel4_cnode_slot_1164()
    assert s["spec_id"] == 1164
