"""Specification for seL4 microkernel capability CNode slot routing policy order 1680."""

def spec_sel4_cnode_slot_1680() -> dict:
    return {"system": "seL4", "spec_id": 1680, "cap_rights": 0x07, "cnode_depth": 32, "badge": 144}

def test_spec_sel4_cnode_slot_1680():
    s = spec_sel4_cnode_slot_1680()
    assert s["spec_id"] == 1680
