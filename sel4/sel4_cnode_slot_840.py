"""Specification for seL4 microkernel capability CNode slot routing policy order 840."""

def spec_sel4_cnode_slot_840() -> dict:
    return {"system": "seL4", "spec_id": 840, "cap_rights": 0x07, "cnode_depth": 32, "badge": 72}

def test_spec_sel4_cnode_slot_840():
    s = spec_sel4_cnode_slot_840()
    assert s["spec_id"] == 840
