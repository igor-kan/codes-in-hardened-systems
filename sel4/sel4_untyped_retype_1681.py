"""Specification for seL4 untyped memory retyping capability constraint order 1681."""

def spec_sel4_untyped_retype_1681() -> dict:
    return {"system": "seL4", "spec_id": 1681, "cap_rights": 0x07, "cnode_depth": 32, "badge": 145}

def test_spec_sel4_untyped_retype_1681():
    s = spec_sel4_untyped_retype_1681()
    assert s["spec_id"] == 1681
