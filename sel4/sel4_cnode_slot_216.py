"""Specification for seL4 microkernel capability CNode slot routing policy order 216."""

def spec_sel4_cnode_slot_216() -> dict:
    return {"system": "seL4", "spec_id": 216, "cap_rights": 0x07, "cnode_depth": 32, "badge": 216}

def test_spec_sel4_cnode_slot_216():
    s = spec_sel4_cnode_slot_216()
    assert s["spec_id"] == 216
