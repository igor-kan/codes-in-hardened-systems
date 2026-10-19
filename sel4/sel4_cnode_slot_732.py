"""Specification for seL4 microkernel capability CNode slot routing policy order 732."""

def spec_sel4_cnode_slot_732() -> dict:
    return {"system": "seL4", "spec_id": 732, "cap_rights": 0x07, "cnode_depth": 32, "badge": 220}

def test_spec_sel4_cnode_slot_732():
    s = spec_sel4_cnode_slot_732()
    assert s["spec_id"] == 732
