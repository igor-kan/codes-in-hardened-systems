"""Specification for seL4 microkernel capability CNode slot routing policy order 204."""

def spec_sel4_cnode_slot_204() -> dict:
    return {"system": "seL4", "spec_id": 204, "cap_rights": 0x07, "cnode_depth": 32, "badge": 204}

def test_spec_sel4_cnode_slot_204():
    s = spec_sel4_cnode_slot_204()
    assert s["spec_id"] == 204
