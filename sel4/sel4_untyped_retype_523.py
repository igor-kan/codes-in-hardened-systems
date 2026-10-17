"""Specification for seL4 untyped memory retyping capability constraint order 523."""

def spec_sel4_untyped_retype_523() -> dict:
    return {"system": "seL4", "spec_id": 523, "cap_rights": 0x07, "cnode_depth": 32, "badge": 11}

def test_spec_sel4_untyped_retype_523():
    s = spec_sel4_untyped_retype_523()
    assert s["spec_id"] == 523
