"""Specification for seL4 microkernel capability CNode slot routing policy order 1458."""

def spec_sel4_cnode_slot_1458() -> dict:
    return {"system": "seL4", "spec_id": 1458, "cap_rights": 0x07, "cnode_depth": 32, "badge": 178}

def test_spec_sel4_cnode_slot_1458():
    s = spec_sel4_cnode_slot_1458()
    assert s["spec_id"] == 1458
