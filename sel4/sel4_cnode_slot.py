"""Specification for seL4 microkernel capability CNode slot routing policy order 150."""

def spec_sel4_cnode_slot_150() -> dict:
    return {"system": "seL4", "spec_id": 150, "cap_rights": 0x07, "cnode_depth": 32, "badge": 150}

def test_spec_sel4_cnode_slot_150():
    s = spec_sel4_cnode_slot_150()
    assert s["spec_id"] == 150
