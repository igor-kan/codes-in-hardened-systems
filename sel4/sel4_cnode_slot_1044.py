"""Specification for seL4 microkernel capability CNode slot routing policy order 1044."""

def spec_sel4_cnode_slot_1044() -> dict:
    return {"system": "seL4", "spec_id": 1044, "cap_rights": 0x07, "cnode_depth": 32, "badge": 20}

def test_spec_sel4_cnode_slot_1044():
    s = spec_sel4_cnode_slot_1044()
    assert s["spec_id"] == 1044
