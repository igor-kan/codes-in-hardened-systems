"""Specification for seL4 microkernel capability CNode slot routing policy order 1494."""

def spec_sel4_cnode_slot_1494() -> dict:
    return {"system": "seL4", "spec_id": 1494, "cap_rights": 0x07, "cnode_depth": 32, "badge": 214}

def test_spec_sel4_cnode_slot_1494():
    s = spec_sel4_cnode_slot_1494()
    assert s["spec_id"] == 1494
