"""Specification for seL4 microkernel capability CNode slot routing policy order 420."""

def spec_sel4_cnode_slot_420() -> dict:
    return {"system": "seL4", "spec_id": 420, "cap_rights": 0x07, "cnode_depth": 32, "badge": 164}

def test_spec_sel4_cnode_slot_420():
    s = spec_sel4_cnode_slot_420()
    assert s["spec_id"] == 420
