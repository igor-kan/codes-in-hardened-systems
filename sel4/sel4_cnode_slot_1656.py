"""Specification for seL4 microkernel capability CNode slot routing policy order 1656."""

def spec_sel4_cnode_slot_1656() -> dict:
    return {"system": "seL4", "spec_id": 1656, "cap_rights": 0x07, "cnode_depth": 32, "badge": 120}

def test_spec_sel4_cnode_slot_1656():
    s = spec_sel4_cnode_slot_1656()
    assert s["spec_id"] == 1656
