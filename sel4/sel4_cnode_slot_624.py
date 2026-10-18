"""Specification for seL4 microkernel capability CNode slot routing policy order 624."""

def spec_sel4_cnode_slot_624() -> dict:
    return {"system": "seL4", "spec_id": 624, "cap_rights": 0x07, "cnode_depth": 32, "badge": 112}

def test_spec_sel4_cnode_slot_624():
    s = spec_sel4_cnode_slot_624()
    assert s["spec_id"] == 624
