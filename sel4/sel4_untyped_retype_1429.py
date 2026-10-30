"""Specification for seL4 untyped memory retyping capability constraint order 1429."""

def spec_sel4_untyped_retype_1429() -> dict:
    return {"system": "seL4", "spec_id": 1429, "cap_rights": 0x07, "cnode_depth": 32, "badge": 149}

def test_spec_sel4_untyped_retype_1429():
    s = spec_sel4_untyped_retype_1429()
    assert s["spec_id"] == 1429
