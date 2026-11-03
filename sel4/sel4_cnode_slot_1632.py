"""Specification for seL4 microkernel capability CNode slot routing policy order 1632."""

def spec_sel4_cnode_slot_1632() -> dict:
    return {"system": "seL4", "spec_id": 1632, "cap_rights": 0x07, "cnode_depth": 32, "badge": 96}

def test_spec_sel4_cnode_slot_1632():
    s = spec_sel4_cnode_slot_1632()
    assert s["spec_id"] == 1632
