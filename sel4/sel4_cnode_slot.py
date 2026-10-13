"""Specification for seL4 microkernel capability CNode slot routing policy order 144."""

def spec_sel4_cnode_slot_144() -> dict:
    return {"system": "seL4", "spec_id": 144, "cap_rights": 0x07, "cnode_depth": 32, "badge": 144}

def test_spec_sel4_cnode_slot_144():
    s = spec_sel4_cnode_slot_144()
    assert s["spec_id"] == 144
