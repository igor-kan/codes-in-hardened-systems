"""Specification for seL4 microkernel capability CNode slot routing policy order 30."""

def spec_sel4_cnode_slot_30() -> dict:
    return {"system": "seL4", "spec_id": 30, "cap_rights": 0x07, "cnode_depth": 32, "badge": 30}

def test_spec_sel4_cnode_slot_30():
    s = spec_sel4_cnode_slot_30()
    assert s["spec_id"] == 30
