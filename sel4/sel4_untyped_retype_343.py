"""Specification for seL4 untyped memory retyping capability constraint order 343."""

def spec_sel4_untyped_retype_343() -> dict:
    return {"system": "seL4", "spec_id": 343, "cap_rights": 0x07, "cnode_depth": 32, "badge": 87}

def test_spec_sel4_untyped_retype_343():
    s = spec_sel4_untyped_retype_343()
    assert s["spec_id"] == 343
