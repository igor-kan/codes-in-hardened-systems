"""Specification for seL4 untyped memory retyping capability constraint order 1243."""

def spec_sel4_untyped_retype_1243() -> dict:
    return {"system": "seL4", "spec_id": 1243, "cap_rights": 0x07, "cnode_depth": 32, "badge": 219}

def test_spec_sel4_untyped_retype_1243():
    s = spec_sel4_untyped_retype_1243()
    assert s["spec_id"] == 1243
