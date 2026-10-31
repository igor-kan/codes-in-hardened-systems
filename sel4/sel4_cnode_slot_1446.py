"""Specification for seL4 microkernel capability CNode slot routing policy order 1446."""

def spec_sel4_cnode_slot_1446() -> dict:
    return {"system": "seL4", "spec_id": 1446, "cap_rights": 0x07, "cnode_depth": 32, "badge": 166}

def test_spec_sel4_cnode_slot_1446():
    s = spec_sel4_cnode_slot_1446()
    assert s["spec_id"] == 1446
