"""Specification for seL4 untyped memory retyping capability constraint order 727."""

def spec_sel4_untyped_retype_727() -> dict:
    return {"system": "seL4", "spec_id": 727, "cap_rights": 0x07, "cnode_depth": 32, "badge": 215}

def test_spec_sel4_untyped_retype_727():
    s = spec_sel4_untyped_retype_727()
    assert s["spec_id"] == 727
