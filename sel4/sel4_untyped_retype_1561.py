"""Specification for seL4 untyped memory retyping capability constraint order 1561."""

def spec_sel4_untyped_retype_1561() -> dict:
    return {"system": "seL4", "spec_id": 1561, "cap_rights": 0x07, "cnode_depth": 32, "badge": 25}

def test_spec_sel4_untyped_retype_1561():
    s = spec_sel4_untyped_retype_1561()
    assert s["spec_id"] == 1561
