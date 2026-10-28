"""Specification for seL4 microkernel capability CNode slot routing policy order 1362."""

def spec_sel4_cnode_slot_1362() -> dict:
    return {"system": "seL4", "spec_id": 1362, "cap_rights": 0x07, "cnode_depth": 32, "badge": 82}

def test_spec_sel4_cnode_slot_1362():
    s = spec_sel4_cnode_slot_1362()
    assert s["spec_id"] == 1362
