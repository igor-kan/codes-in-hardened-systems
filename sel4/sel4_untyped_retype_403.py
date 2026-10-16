"""Specification for seL4 untyped memory retyping capability constraint order 403."""

def spec_sel4_untyped_retype_403() -> dict:
    return {"system": "seL4", "spec_id": 403, "cap_rights": 0x07, "cnode_depth": 32, "badge": 147}

def test_spec_sel4_untyped_retype_403():
    s = spec_sel4_untyped_retype_403()
    assert s["spec_id"] == 403
