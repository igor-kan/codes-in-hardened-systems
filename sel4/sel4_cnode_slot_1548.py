"""Specification for seL4 microkernel capability CNode slot routing policy order 1548."""

def spec_sel4_cnode_slot_1548() -> dict:
    return {"system": "seL4", "spec_id": 1548, "cap_rights": 0x07, "cnode_depth": 32, "badge": 12}

def test_spec_sel4_cnode_slot_1548():
    s = spec_sel4_cnode_slot_1548()
    assert s["spec_id"] == 1548
