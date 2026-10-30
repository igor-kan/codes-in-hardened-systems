"""Specification for seL4 untyped memory retyping capability constraint order 1381."""

def spec_sel4_untyped_retype_1381() -> dict:
    return {"system": "seL4", "spec_id": 1381, "cap_rights": 0x07, "cnode_depth": 32, "badge": 101}

def test_spec_sel4_untyped_retype_1381():
    s = spec_sel4_untyped_retype_1381()
    assert s["spec_id"] == 1381
