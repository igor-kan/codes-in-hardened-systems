"""Specification for seL4 untyped memory retyping capability constraint order 61."""

def spec_sel4_untyped_retype_61() -> dict:
    return {"system": "seL4", "spec_id": 61, "cap_rights": 0x07, "cnode_depth": 32, "badge": 61}

def test_spec_sel4_untyped_retype_61():
    s = spec_sel4_untyped_retype_61()
    assert s["spec_id"] == 61
