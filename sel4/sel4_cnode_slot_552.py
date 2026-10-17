"""Specification for seL4 microkernel capability CNode slot routing policy order 552."""

def spec_sel4_cnode_slot_552() -> dict:
    return {"system": "seL4", "spec_id": 552, "cap_rights": 0x07, "cnode_depth": 32, "badge": 40}

def test_spec_sel4_cnode_slot_552():
    s = spec_sel4_cnode_slot_552()
    assert s["spec_id"] == 552
