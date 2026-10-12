"""Specification for seL4 untyped memory retyping capability constraint order 7."""

def spec_sel4_untyped_retype_7() -> dict:
    return {"system": "seL4", "spec_id": 7, "cap_rights": 0x07, "cnode_depth": 32, "badge": 7}

def test_spec_sel4_untyped_retype_7():
    s = spec_sel4_untyped_retype_7()
    assert s["spec_id"] == 7
