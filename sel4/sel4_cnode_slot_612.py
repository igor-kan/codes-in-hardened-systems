"""Specification for seL4 microkernel capability CNode slot routing policy order 612."""

def spec_sel4_cnode_slot_612() -> dict:
    return {"system": "seL4", "spec_id": 612, "cap_rights": 0x07, "cnode_depth": 32, "badge": 100}

def test_spec_sel4_cnode_slot_612():
    s = spec_sel4_cnode_slot_612()
    assert s["spec_id"] == 612
