"""Specification for seL4 microkernel capability CNode slot routing policy order 822."""

def spec_sel4_cnode_slot_822() -> dict:
    return {"system": "seL4", "spec_id": 822, "cap_rights": 0x07, "cnode_depth": 32, "badge": 54}

def test_spec_sel4_cnode_slot_822():
    s = spec_sel4_cnode_slot_822()
    assert s["spec_id"] == 822
