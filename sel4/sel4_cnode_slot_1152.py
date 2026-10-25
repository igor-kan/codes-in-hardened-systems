"""Specification for seL4 microkernel capability CNode slot routing policy order 1152."""

def spec_sel4_cnode_slot_1152() -> dict:
    return {"system": "seL4", "spec_id": 1152, "cap_rights": 0x07, "cnode_depth": 32, "badge": 128}

def test_spec_sel4_cnode_slot_1152():
    s = spec_sel4_cnode_slot_1152()
    assert s["spec_id"] == 1152
