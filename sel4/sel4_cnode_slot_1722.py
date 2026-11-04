"""Specification for seL4 microkernel capability CNode slot routing policy order 1722."""

def spec_sel4_cnode_slot_1722() -> dict:
    return {"system": "seL4", "spec_id": 1722, "cap_rights": 0x07, "cnode_depth": 32, "badge": 186}

def test_spec_sel4_cnode_slot_1722():
    s = spec_sel4_cnode_slot_1722()
    assert s["spec_id"] == 1722
