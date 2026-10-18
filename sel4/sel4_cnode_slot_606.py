"""Specification for seL4 microkernel capability CNode slot routing policy order 606."""

def spec_sel4_cnode_slot_606() -> dict:
    return {"system": "seL4", "spec_id": 606, "cap_rights": 0x07, "cnode_depth": 32, "badge": 94}

def test_spec_sel4_cnode_slot_606():
    s = spec_sel4_cnode_slot_606()
    assert s["spec_id"] == 606
