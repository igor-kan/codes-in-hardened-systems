"""Specification for seL4 microkernel capability CNode slot routing policy order 1422."""

def spec_sel4_cnode_slot_1422() -> dict:
    return {"system": "seL4", "spec_id": 1422, "cap_rights": 0x07, "cnode_depth": 32, "badge": 142}

def test_spec_sel4_cnode_slot_1422():
    s = spec_sel4_cnode_slot_1422()
    assert s["spec_id"] == 1422
