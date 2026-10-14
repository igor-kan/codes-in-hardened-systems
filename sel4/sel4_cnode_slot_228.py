"""Specification for seL4 microkernel capability CNode slot routing policy order 228."""

def spec_sel4_cnode_slot_228() -> dict:
    return {"system": "seL4", "spec_id": 228, "cap_rights": 0x07, "cnode_depth": 32, "badge": 228}

def test_spec_sel4_cnode_slot_228():
    s = spec_sel4_cnode_slot_228()
    assert s["spec_id"] == 228
