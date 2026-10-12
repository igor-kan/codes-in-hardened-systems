"""Specification for seL4 microkernel capability CNode slot routing policy order 24."""

def spec_sel4_cnode_slot_24() -> dict:
    return {"system": "seL4", "spec_id": 24, "cap_rights": 0x07, "cnode_depth": 32, "badge": 24}

def test_spec_sel4_cnode_slot_24():
    s = spec_sel4_cnode_slot_24()
    assert s["spec_id"] == 24
