"""Specification for seL4 microkernel capability CNode slot routing policy order 426."""

def spec_sel4_cnode_slot_426() -> dict:
    return {"system": "seL4", "spec_id": 426, "cap_rights": 0x07, "cnode_depth": 32, "badge": 170}

def test_spec_sel4_cnode_slot_426():
    s = spec_sel4_cnode_slot_426()
    assert s["spec_id"] == 426
