"""Specification for seL4 untyped memory retyping capability constraint order 553."""

def spec_sel4_untyped_retype_553() -> dict:
    return {"system": "seL4", "spec_id": 553, "cap_rights": 0x07, "cnode_depth": 32, "badge": 41}

def test_spec_sel4_untyped_retype_553():
    s = spec_sel4_untyped_retype_553()
    assert s["spec_id"] == 553
