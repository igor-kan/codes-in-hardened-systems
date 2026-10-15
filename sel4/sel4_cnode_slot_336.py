"""Specification for seL4 microkernel capability CNode slot routing policy order 336."""

def spec_sel4_cnode_slot_336() -> dict:
    return {"system": "seL4", "spec_id": 336, "cap_rights": 0x07, "cnode_depth": 32, "badge": 80}

def test_spec_sel4_cnode_slot_336():
    s = spec_sel4_cnode_slot_336()
    assert s["spec_id"] == 336
