"""Specification for seL4 untyped memory retyping capability constraint order 55."""

def spec_sel4_untyped_retype_55() -> dict:
    return {"system": "seL4", "spec_id": 55, "cap_rights": 0x07, "cnode_depth": 32, "badge": 55}

def test_spec_sel4_untyped_retype_55():
    s = spec_sel4_untyped_retype_55()
    assert s["spec_id"] == 55
