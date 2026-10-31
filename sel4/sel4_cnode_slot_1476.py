"""Specification for seL4 microkernel capability CNode slot routing policy order 1476."""

def spec_sel4_cnode_slot_1476() -> dict:
    return {"system": "seL4", "spec_id": 1476, "cap_rights": 0x07, "cnode_depth": 32, "badge": 196}

def test_spec_sel4_cnode_slot_1476():
    s = spec_sel4_cnode_slot_1476()
    assert s["spec_id"] == 1476
