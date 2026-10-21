"""Specification for seL4 untyped memory retyping capability constraint order 925."""

def spec_sel4_untyped_retype_925() -> dict:
    return {"system": "seL4", "spec_id": 925, "cap_rights": 0x07, "cnode_depth": 32, "badge": 157}

def test_spec_sel4_untyped_retype_925():
    s = spec_sel4_untyped_retype_925()
    assert s["spec_id"] == 925
