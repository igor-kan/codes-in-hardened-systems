"""Specification for seL4 untyped memory retyping capability constraint order 1753."""

def spec_sel4_untyped_retype_1753() -> dict:
    return {"system": "seL4", "spec_id": 1753, "cap_rights": 0x07, "cnode_depth": 32, "badge": 217}

def test_spec_sel4_untyped_retype_1753():
    s = spec_sel4_untyped_retype_1753()
    assert s["spec_id"] == 1753
