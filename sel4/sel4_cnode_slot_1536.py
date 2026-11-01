"""Specification for seL4 microkernel capability CNode slot routing policy order 1536."""

def spec_sel4_cnode_slot_1536() -> dict:
    return {"system": "seL4", "spec_id": 1536, "cap_rights": 0x07, "cnode_depth": 32, "badge": 0}

def test_spec_sel4_cnode_slot_1536():
    s = spec_sel4_cnode_slot_1536()
    assert s["spec_id"] == 1536
