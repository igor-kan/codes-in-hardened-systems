"""Specification for seL4 untyped memory retyping capability constraint order 1105."""

def spec_sel4_untyped_retype_1105() -> dict:
    return {"system": "seL4", "spec_id": 1105, "cap_rights": 0x07, "cnode_depth": 32, "badge": 81}

def test_spec_sel4_untyped_retype_1105():
    s = spec_sel4_untyped_retype_1105()
    assert s["spec_id"] == 1105
