"""Specification for seL4 untyped memory retyping capability constraint order 1339."""

def spec_sel4_untyped_retype_1339() -> dict:
    return {"system": "seL4", "spec_id": 1339, "cap_rights": 0x07, "cnode_depth": 32, "badge": 59}

def test_spec_sel4_untyped_retype_1339():
    s = spec_sel4_untyped_retype_1339()
    assert s["spec_id"] == 1339
