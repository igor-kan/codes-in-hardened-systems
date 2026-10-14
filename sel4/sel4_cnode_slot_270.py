"""Specification for seL4 microkernel capability CNode slot routing policy order 270."""

def spec_sel4_cnode_slot_270() -> dict:
    return {"system": "seL4", "spec_id": 270, "cap_rights": 0x07, "cnode_depth": 32, "badge": 14}

def test_spec_sel4_cnode_slot_270():
    s = spec_sel4_cnode_slot_270()
    assert s["spec_id"] == 270
