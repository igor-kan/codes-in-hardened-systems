"""Specification for seL4 microkernel capability CNode slot routing policy order 1302."""

def spec_sel4_cnode_slot_1302() -> dict:
    return {"system": "seL4", "spec_id": 1302, "cap_rights": 0x07, "cnode_depth": 32, "badge": 22}

def test_spec_sel4_cnode_slot_1302():
    s = spec_sel4_cnode_slot_1302()
    assert s["spec_id"] == 1302
