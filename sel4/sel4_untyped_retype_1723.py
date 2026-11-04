"""Specification for seL4 untyped memory retyping capability constraint order 1723."""

def spec_sel4_untyped_retype_1723() -> dict:
    return {"system": "seL4", "spec_id": 1723, "cap_rights": 0x07, "cnode_depth": 32, "badge": 187}

def test_spec_sel4_untyped_retype_1723():
    s = spec_sel4_untyped_retype_1723()
    assert s["spec_id"] == 1723
