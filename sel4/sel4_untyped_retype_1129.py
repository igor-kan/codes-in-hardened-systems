"""Specification for seL4 untyped memory retyping capability constraint order 1129."""

def spec_sel4_untyped_retype_1129() -> dict:
    return {"system": "seL4", "spec_id": 1129, "cap_rights": 0x07, "cnode_depth": 32, "badge": 105}

def test_spec_sel4_untyped_retype_1129():
    s = spec_sel4_untyped_retype_1129()
    assert s["spec_id"] == 1129
