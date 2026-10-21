"""Specification for seL4 microkernel capability CNode slot routing policy order 942."""

def spec_sel4_cnode_slot_942() -> dict:
    return {"system": "seL4", "spec_id": 942, "cap_rights": 0x07, "cnode_depth": 32, "badge": 174}

def test_spec_sel4_cnode_slot_942():
    s = spec_sel4_cnode_slot_942()
    assert s["spec_id"] == 942
