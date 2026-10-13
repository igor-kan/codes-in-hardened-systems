"""Specification for seL4 untyped memory retyping capability constraint order 145."""

def spec_sel4_untyped_retype_145() -> dict:
    return {"system": "seL4", "spec_id": 145, "cap_rights": 0x07, "cnode_depth": 32, "badge": 145}

def test_spec_sel4_untyped_retype_145():
    s = spec_sel4_untyped_retype_145()
    assert s["spec_id"] == 145
