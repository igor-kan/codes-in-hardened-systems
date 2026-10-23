"""Specification for seL4 microkernel capability CNode slot routing policy order 1038."""

def spec_sel4_cnode_slot_1038() -> dict:
    return {"system": "seL4", "spec_id": 1038, "cap_rights": 0x07, "cnode_depth": 32, "badge": 14}

def test_spec_sel4_cnode_slot_1038():
    s = spec_sel4_cnode_slot_1038()
    assert s["spec_id"] == 1038
