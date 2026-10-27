"""Specification for seL4 microkernel capability CNode slot routing policy order 1284."""

def spec_sel4_cnode_slot_1284() -> dict:
    return {"system": "seL4", "spec_id": 1284, "cap_rights": 0x07, "cnode_depth": 32, "badge": 4}

def test_spec_sel4_cnode_slot_1284():
    s = spec_sel4_cnode_slot_1284()
    assert s["spec_id"] == 1284
