"""Specification for seL4 microkernel capability CNode slot routing policy order 378."""

def spec_sel4_cnode_slot_378() -> dict:
    return {"system": "seL4", "spec_id": 378, "cap_rights": 0x07, "cnode_depth": 32, "badge": 122}

def test_spec_sel4_cnode_slot_378():
    s = spec_sel4_cnode_slot_378()
    assert s["spec_id"] == 378
