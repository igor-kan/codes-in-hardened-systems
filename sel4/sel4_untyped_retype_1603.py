"""Specification for seL4 untyped memory retyping capability constraint order 1603."""

def spec_sel4_untyped_retype_1603() -> dict:
    return {"system": "seL4", "spec_id": 1603, "cap_rights": 0x07, "cnode_depth": 32, "badge": 67}

def test_spec_sel4_untyped_retype_1603():
    s = spec_sel4_untyped_retype_1603()
    assert s["spec_id"] == 1603
