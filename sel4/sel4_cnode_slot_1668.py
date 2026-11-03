"""Specification for seL4 microkernel capability CNode slot routing policy order 1668."""

def spec_sel4_cnode_slot_1668() -> dict:
    return {"system": "seL4", "spec_id": 1668, "cap_rights": 0x07, "cnode_depth": 32, "badge": 132}

def test_spec_sel4_cnode_slot_1668():
    s = spec_sel4_cnode_slot_1668()
    assert s["spec_id"] == 1668
