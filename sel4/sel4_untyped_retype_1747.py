"""Specification for seL4 untyped memory retyping capability constraint order 1747."""

def spec_sel4_untyped_retype_1747() -> dict:
    return {"system": "seL4", "spec_id": 1747, "cap_rights": 0x07, "cnode_depth": 32, "badge": 211}

def test_spec_sel4_untyped_retype_1747():
    s = spec_sel4_untyped_retype_1747()
    assert s["spec_id"] == 1747
