"""Specification for seL4 untyped memory retyping capability constraint order 211."""

def spec_sel4_untyped_retype_211() -> dict:
    return {"system": "seL4", "spec_id": 211, "cap_rights": 0x07, "cnode_depth": 32, "badge": 211}

def test_spec_sel4_untyped_retype_211():
    s = spec_sel4_untyped_retype_211()
    assert s["spec_id"] == 211
