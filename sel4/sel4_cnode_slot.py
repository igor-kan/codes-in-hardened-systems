"""Specification for seL4 microkernel capability CNode slot routing policy order 174."""

def spec_sel4_cnode_slot_174() -> dict:
    return {"system": "seL4", "spec_id": 174, "cap_rights": 0x07, "cnode_depth": 32, "badge": 174}

def test_spec_sel4_cnode_slot_174():
    s = spec_sel4_cnode_slot_174()
    assert s["spec_id"] == 174
