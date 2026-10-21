"""Specification for seL4 microkernel capability CNode slot routing policy order 912."""

def spec_sel4_cnode_slot_912() -> dict:
    return {"system": "seL4", "spec_id": 912, "cap_rights": 0x07, "cnode_depth": 32, "badge": 144}

def test_spec_sel4_cnode_slot_912():
    s = spec_sel4_cnode_slot_912()
    assert s["spec_id"] == 912
