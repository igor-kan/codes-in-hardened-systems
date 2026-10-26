"""Specification for seL4 microkernel capability CNode slot routing policy order 1224."""

def spec_sel4_cnode_slot_1224() -> dict:
    return {"system": "seL4", "spec_id": 1224, "cap_rights": 0x07, "cnode_depth": 32, "badge": 200}

def test_spec_sel4_cnode_slot_1224():
    s = spec_sel4_cnode_slot_1224()
    assert s["spec_id"] == 1224
