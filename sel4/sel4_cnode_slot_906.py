"""Specification for seL4 microkernel capability CNode slot routing policy order 906."""

def spec_sel4_cnode_slot_906() -> dict:
    return {"system": "seL4", "spec_id": 906, "cap_rights": 0x07, "cnode_depth": 32, "badge": 138}

def test_spec_sel4_cnode_slot_906():
    s = spec_sel4_cnode_slot_906()
    assert s["spec_id"] == 906
