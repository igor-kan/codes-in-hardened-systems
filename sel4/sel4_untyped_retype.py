"""Specification for seL4 untyped memory retyping capability constraint order 79."""

def spec_sel4_untyped_retype_79() -> dict:
    return {"system": "seL4", "spec_id": 79, "cap_rights": 0x07, "cnode_depth": 32, "badge": 79}

def test_spec_sel4_untyped_retype_79():
    s = spec_sel4_untyped_retype_79()
    assert s["spec_id"] == 79
