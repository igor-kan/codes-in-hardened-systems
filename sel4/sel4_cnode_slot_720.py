"""Specification for seL4 microkernel capability CNode slot routing policy order 720."""

def spec_sel4_cnode_slot_720() -> dict:
    return {"system": "seL4", "spec_id": 720, "cap_rights": 0x07, "cnode_depth": 32, "badge": 208}

def test_spec_sel4_cnode_slot_720():
    s = spec_sel4_cnode_slot_720()
    assert s["spec_id"] == 720
