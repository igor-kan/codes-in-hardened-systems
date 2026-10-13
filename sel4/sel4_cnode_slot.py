"""Specification for seL4 microkernel capability CNode slot routing policy order 120."""

def spec_sel4_cnode_slot_120() -> dict:
    return {"system": "seL4", "spec_id": 120, "cap_rights": 0x07, "cnode_depth": 32, "badge": 120}

def test_spec_sel4_cnode_slot_120():
    s = spec_sel4_cnode_slot_120()
    assert s["spec_id"] == 120
