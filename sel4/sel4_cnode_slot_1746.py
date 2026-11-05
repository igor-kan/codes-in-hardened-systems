"""Specification for seL4 microkernel capability CNode slot routing policy order 1746."""

def spec_sel4_cnode_slot_1746() -> dict:
    return {"system": "seL4", "spec_id": 1746, "cap_rights": 0x07, "cnode_depth": 32, "badge": 210}

def test_spec_sel4_cnode_slot_1746():
    s = spec_sel4_cnode_slot_1746()
    assert s["spec_id"] == 1746
