"""Specification for seL4 microkernel capability CNode slot routing policy order 528."""

def spec_sel4_cnode_slot_528() -> dict:
    return {"system": "seL4", "spec_id": 528, "cap_rights": 0x07, "cnode_depth": 32, "badge": 16}

def test_spec_sel4_cnode_slot_528():
    s = spec_sel4_cnode_slot_528()
    assert s["spec_id"] == 528
