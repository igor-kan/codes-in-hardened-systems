"""Specification for seL4 microkernel capability CNode slot routing policy order 1254."""

def spec_sel4_cnode_slot_1254() -> dict:
    return {"system": "seL4", "spec_id": 1254, "cap_rights": 0x07, "cnode_depth": 32, "badge": 230}

def test_spec_sel4_cnode_slot_1254():
    s = spec_sel4_cnode_slot_1254()
    assert s["spec_id"] == 1254
