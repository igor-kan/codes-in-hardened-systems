"""Specification for seL4 microkernel capability CNode slot routing policy order 630."""

def spec_sel4_cnode_slot_630() -> dict:
    return {"system": "seL4", "spec_id": 630, "cap_rights": 0x07, "cnode_depth": 32, "badge": 118}

def test_spec_sel4_cnode_slot_630():
    s = spec_sel4_cnode_slot_630()
    assert s["spec_id"] == 630
