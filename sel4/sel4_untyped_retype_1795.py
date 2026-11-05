"""Specification for seL4 untyped memory retyping capability constraint order 1795."""

def spec_sel4_untyped_retype_1795() -> dict:
    return {"system": "seL4", "spec_id": 1795, "cap_rights": 0x07, "cnode_depth": 32, "badge": 3}

def test_spec_sel4_untyped_retype_1795():
    s = spec_sel4_untyped_retype_1795()
    assert s["spec_id"] == 1795
