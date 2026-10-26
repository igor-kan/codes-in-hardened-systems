"""Specification for seL4 untyped memory retyping capability constraint order 1231."""

def spec_sel4_untyped_retype_1231() -> dict:
    return {"system": "seL4", "spec_id": 1231, "cap_rights": 0x07, "cnode_depth": 32, "badge": 207}

def test_spec_sel4_untyped_retype_1231():
    s = spec_sel4_untyped_retype_1231()
    assert s["spec_id"] == 1231
