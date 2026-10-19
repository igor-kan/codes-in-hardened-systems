"""Specification for seL4 microkernel capability CNode slot routing policy order 738."""

def spec_sel4_cnode_slot_738() -> dict:
    return {"system": "seL4", "spec_id": 738, "cap_rights": 0x07, "cnode_depth": 32, "badge": 226}

def test_spec_sel4_cnode_slot_738():
    s = spec_sel4_cnode_slot_738()
    assert s["spec_id"] == 738
