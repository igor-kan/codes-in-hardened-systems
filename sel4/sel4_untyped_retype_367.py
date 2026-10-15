"""Specification for seL4 untyped memory retyping capability constraint order 367."""

def spec_sel4_untyped_retype_367() -> dict:
    return {"system": "seL4", "spec_id": 367, "cap_rights": 0x07, "cnode_depth": 32, "badge": 111}

def test_spec_sel4_untyped_retype_367():
    s = spec_sel4_untyped_retype_367()
    assert s["spec_id"] == 367
