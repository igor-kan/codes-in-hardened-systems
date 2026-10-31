"""Specification for seL4 microkernel capability CNode slot routing policy order 1452."""

def spec_sel4_cnode_slot_1452() -> dict:
    return {"system": "seL4", "spec_id": 1452, "cap_rights": 0x07, "cnode_depth": 32, "badge": 172}

def test_spec_sel4_cnode_slot_1452():
    s = spec_sel4_cnode_slot_1452()
    assert s["spec_id"] == 1452
