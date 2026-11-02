"""Specification for seL4 microkernel capability CNode slot routing policy order 1578."""

def spec_sel4_cnode_slot_1578() -> dict:
    return {"system": "seL4", "spec_id": 1578, "cap_rights": 0x07, "cnode_depth": 32, "badge": 42}

def test_spec_sel4_cnode_slot_1578():
    s = spec_sel4_cnode_slot_1578()
    assert s["spec_id"] == 1578
