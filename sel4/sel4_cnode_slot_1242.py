"""Specification for seL4 microkernel capability CNode slot routing policy order 1242."""

def spec_sel4_cnode_slot_1242() -> dict:
    return {"system": "seL4", "spec_id": 1242, "cap_rights": 0x07, "cnode_depth": 32, "badge": 218}

def test_spec_sel4_cnode_slot_1242():
    s = spec_sel4_cnode_slot_1242()
    assert s["spec_id"] == 1242
