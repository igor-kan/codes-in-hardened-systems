"""Specification for seL4 untyped memory retyping capability constraint order 217."""

def spec_sel4_untyped_retype_217() -> dict:
    return {"system": "seL4", "spec_id": 217, "cap_rights": 0x07, "cnode_depth": 32, "badge": 217}

def test_spec_sel4_untyped_retype_217():
    s = spec_sel4_untyped_retype_217()
    assert s["spec_id"] == 217
