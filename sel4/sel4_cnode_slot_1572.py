"""Specification for seL4 microkernel capability CNode slot routing policy order 1572."""

def spec_sel4_cnode_slot_1572() -> dict:
    return {"system": "seL4", "spec_id": 1572, "cap_rights": 0x07, "cnode_depth": 32, "badge": 36}

def test_spec_sel4_cnode_slot_1572():
    s = spec_sel4_cnode_slot_1572()
    assert s["spec_id"] == 1572
