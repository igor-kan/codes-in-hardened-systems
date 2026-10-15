"""Specification for seL4 untyped memory retyping capability constraint order 319."""

def spec_sel4_untyped_retype_319() -> dict:
    return {"system": "seL4", "spec_id": 319, "cap_rights": 0x07, "cnode_depth": 32, "badge": 63}

def test_spec_sel4_untyped_retype_319():
    s = spec_sel4_untyped_retype_319()
    assert s["spec_id"] == 319
