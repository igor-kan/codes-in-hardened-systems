"""Specification for seL4 untyped memory retyping capability constraint order 1441."""

def spec_sel4_untyped_retype_1441() -> dict:
    return {"system": "seL4", "spec_id": 1441, "cap_rights": 0x07, "cnode_depth": 32, "badge": 161}

def test_spec_sel4_untyped_retype_1441():
    s = spec_sel4_untyped_retype_1441()
    assert s["spec_id"] == 1441
