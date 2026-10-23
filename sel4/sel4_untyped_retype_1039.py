"""Specification for seL4 untyped memory retyping capability constraint order 1039."""

def spec_sel4_untyped_retype_1039() -> dict:
    return {"system": "seL4", "spec_id": 1039, "cap_rights": 0x07, "cnode_depth": 32, "badge": 15}

def test_spec_sel4_untyped_retype_1039():
    s = spec_sel4_untyped_retype_1039()
    assert s["spec_id"] == 1039
