"""Specification for seL4 untyped memory retyping capability constraint order 613."""

def spec_sel4_untyped_retype_613() -> dict:
    return {"system": "seL4", "spec_id": 613, "cap_rights": 0x07, "cnode_depth": 32, "badge": 101}

def test_spec_sel4_untyped_retype_613():
    s = spec_sel4_untyped_retype_613()
    assert s["spec_id"] == 613
