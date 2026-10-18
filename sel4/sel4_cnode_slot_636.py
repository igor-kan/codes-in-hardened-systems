"""Specification for seL4 microkernel capability CNode slot routing policy order 636."""

def spec_sel4_cnode_slot_636() -> dict:
    return {"system": "seL4", "spec_id": 636, "cap_rights": 0x07, "cnode_depth": 32, "badge": 124}

def test_spec_sel4_cnode_slot_636():
    s = spec_sel4_cnode_slot_636()
    assert s["spec_id"] == 636
