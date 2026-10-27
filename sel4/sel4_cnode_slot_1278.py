"""Specification for seL4 microkernel capability CNode slot routing policy order 1278."""

def spec_sel4_cnode_slot_1278() -> dict:
    return {"system": "seL4", "spec_id": 1278, "cap_rights": 0x07, "cnode_depth": 32, "badge": 254}

def test_spec_sel4_cnode_slot_1278():
    s = spec_sel4_cnode_slot_1278()
    assert s["spec_id"] == 1278
