"""Specification for seL4 microkernel capability CNode slot routing policy order 102."""

def spec_sel4_cnode_slot_102() -> dict:
    return {"system": "seL4", "spec_id": 102, "cap_rights": 0x07, "cnode_depth": 32, "badge": 102}

def test_spec_sel4_cnode_slot_102():
    s = spec_sel4_cnode_slot_102()
    assert s["spec_id"] == 102
