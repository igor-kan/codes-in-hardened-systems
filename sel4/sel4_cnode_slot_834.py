"""Specification for seL4 microkernel capability CNode slot routing policy order 834."""

def spec_sel4_cnode_slot_834() -> dict:
    return {"system": "seL4", "spec_id": 834, "cap_rights": 0x07, "cnode_depth": 32, "badge": 66}

def test_spec_sel4_cnode_slot_834():
    s = spec_sel4_cnode_slot_834()
    assert s["spec_id"] == 834
