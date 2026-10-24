"""Specification for seL4 untyped memory retyping capability constraint order 1093."""

def spec_sel4_untyped_retype_1093() -> dict:
    return {"system": "seL4", "spec_id": 1093, "cap_rights": 0x07, "cnode_depth": 32, "badge": 69}

def test_spec_sel4_untyped_retype_1093():
    s = spec_sel4_untyped_retype_1093()
    assert s["spec_id"] == 1093
