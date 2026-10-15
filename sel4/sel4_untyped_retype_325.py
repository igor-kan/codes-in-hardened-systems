"""Specification for seL4 untyped memory retyping capability constraint order 325."""

def spec_sel4_untyped_retype_325() -> dict:
    return {"system": "seL4", "spec_id": 325, "cap_rights": 0x07, "cnode_depth": 32, "badge": 69}

def test_spec_sel4_untyped_retype_325():
    s = spec_sel4_untyped_retype_325()
    assert s["spec_id"] == 325
