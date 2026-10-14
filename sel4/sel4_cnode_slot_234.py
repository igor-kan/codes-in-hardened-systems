"""Specification for seL4 microkernel capability CNode slot routing policy order 234."""

def spec_sel4_cnode_slot_234() -> dict:
    return {"system": "seL4", "spec_id": 234, "cap_rights": 0x07, "cnode_depth": 32, "badge": 234}

def test_spec_sel4_cnode_slot_234():
    s = spec_sel4_cnode_slot_234()
    assert s["spec_id"] == 234
