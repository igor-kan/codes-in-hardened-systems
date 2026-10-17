"""Specification for seL4 microkernel capability CNode slot routing policy order 516."""

def spec_sel4_cnode_slot_516() -> dict:
    return {"system": "seL4", "spec_id": 516, "cap_rights": 0x07, "cnode_depth": 32, "badge": 4}

def test_spec_sel4_cnode_slot_516():
    s = spec_sel4_cnode_slot_516()
    assert s["spec_id"] == 516
