"""Specification for seL4 untyped memory retyping capability constraint order 1777."""

def spec_sel4_untyped_retype_1777() -> dict:
    return {"system": "seL4", "spec_id": 1777, "cap_rights": 0x07, "cnode_depth": 32, "badge": 241}

def test_spec_sel4_untyped_retype_1777():
    s = spec_sel4_untyped_retype_1777()
    assert s["spec_id"] == 1777
