"""Specification for seL4 microkernel capability CNode slot routing policy order 1248."""

def spec_sel4_cnode_slot_1248() -> dict:
    return {"system": "seL4", "spec_id": 1248, "cap_rights": 0x07, "cnode_depth": 32, "badge": 224}

def test_spec_sel4_cnode_slot_1248():
    s = spec_sel4_cnode_slot_1248()
    assert s["spec_id"] == 1248
