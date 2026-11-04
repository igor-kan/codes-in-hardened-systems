"""Specification for seL4 untyped memory retyping capability constraint order 1693."""

def spec_sel4_untyped_retype_1693() -> dict:
    return {"system": "seL4", "spec_id": 1693, "cap_rights": 0x07, "cnode_depth": 32, "badge": 157}

def test_spec_sel4_untyped_retype_1693():
    s = spec_sel4_untyped_retype_1693()
    assert s["spec_id"] == 1693
