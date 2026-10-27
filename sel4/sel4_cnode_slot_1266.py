"""Specification for seL4 microkernel capability CNode slot routing policy order 1266."""

def spec_sel4_cnode_slot_1266() -> dict:
    return {"system": "seL4", "spec_id": 1266, "cap_rights": 0x07, "cnode_depth": 32, "badge": 242}

def test_spec_sel4_cnode_slot_1266():
    s = spec_sel4_cnode_slot_1266()
    assert s["spec_id"] == 1266
