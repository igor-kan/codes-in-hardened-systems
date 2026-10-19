"""Specification for seL4 untyped memory retyping capability constraint order 739."""

def spec_sel4_untyped_retype_739() -> dict:
    return {"system": "seL4", "spec_id": 739, "cap_rights": 0x07, "cnode_depth": 32, "badge": 227}

def test_spec_sel4_untyped_retype_739():
    s = spec_sel4_untyped_retype_739()
    assert s["spec_id"] == 739
