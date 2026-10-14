"""Specification for seL4 untyped memory retyping capability constraint order 283."""

def spec_sel4_untyped_retype_283() -> dict:
    return {"system": "seL4", "spec_id": 283, "cap_rights": 0x07, "cnode_depth": 32, "badge": 27}

def test_spec_sel4_untyped_retype_283():
    s = spec_sel4_untyped_retype_283()
    assert s["spec_id"] == 283
