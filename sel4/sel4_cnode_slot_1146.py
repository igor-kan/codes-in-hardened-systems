"""Specification for seL4 microkernel capability CNode slot routing policy order 1146."""

def spec_sel4_cnode_slot_1146() -> dict:
    return {"system": "seL4", "spec_id": 1146, "cap_rights": 0x07, "cnode_depth": 32, "badge": 122}

def test_spec_sel4_cnode_slot_1146():
    s = spec_sel4_cnode_slot_1146()
    assert s["spec_id"] == 1146
