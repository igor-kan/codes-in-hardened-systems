"""Specification for seL4 microkernel capability CNode slot routing policy order 918."""

def spec_sel4_cnode_slot_918() -> dict:
    return {"system": "seL4", "spec_id": 918, "cap_rights": 0x07, "cnode_depth": 32, "badge": 150}

def test_spec_sel4_cnode_slot_918():
    s = spec_sel4_cnode_slot_918()
    assert s["spec_id"] == 918
