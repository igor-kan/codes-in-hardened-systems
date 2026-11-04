"""Specification for seL4 microkernel capability CNode slot routing policy order 1716."""

def spec_sel4_cnode_slot_1716() -> dict:
    return {"system": "seL4", "spec_id": 1716, "cap_rights": 0x07, "cnode_depth": 32, "badge": 180}

def test_spec_sel4_cnode_slot_1716():
    s = spec_sel4_cnode_slot_1716()
    assert s["spec_id"] == 1716
