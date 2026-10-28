"""Specification for seL4 microkernel capability CNode slot routing policy order 1332."""

def spec_sel4_cnode_slot_1332() -> dict:
    return {"system": "seL4", "spec_id": 1332, "cap_rights": 0x07, "cnode_depth": 32, "badge": 52}

def test_spec_sel4_cnode_slot_1332():
    s = spec_sel4_cnode_slot_1332()
    assert s["spec_id"] == 1332
