"""Specification for seL4 untyped memory retyping capability constraint order 175."""

def spec_sel4_untyped_retype_175() -> dict:
    return {"system": "seL4", "spec_id": 175, "cap_rights": 0x07, "cnode_depth": 32, "badge": 175}

def test_spec_sel4_untyped_retype_175():
    s = spec_sel4_untyped_retype_175()
    assert s["spec_id"] == 175
