"""Specification for seL4 microkernel capability CNode slot routing policy order 1350."""

def spec_sel4_cnode_slot_1350() -> dict:
    return {"system": "seL4", "spec_id": 1350, "cap_rights": 0x07, "cnode_depth": 32, "badge": 70}

def test_spec_sel4_cnode_slot_1350():
    s = spec_sel4_cnode_slot_1350()
    assert s["spec_id"] == 1350
