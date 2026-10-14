"""Specification for seL4 untyped memory retyping capability constraint order 265."""

def spec_sel4_untyped_retype_265() -> dict:
    return {"system": "seL4", "spec_id": 265, "cap_rights": 0x07, "cnode_depth": 32, "badge": 9}

def test_spec_sel4_untyped_retype_265():
    s = spec_sel4_untyped_retype_265()
    assert s["spec_id"] == 265
