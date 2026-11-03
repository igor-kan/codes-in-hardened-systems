"""Specification for seL4 untyped memory retyping capability constraint order 1657."""

def spec_sel4_untyped_retype_1657() -> dict:
    return {"system": "seL4", "spec_id": 1657, "cap_rights": 0x07, "cnode_depth": 32, "badge": 121}

def test_spec_sel4_untyped_retype_1657():
    s = spec_sel4_untyped_retype_1657()
    assert s["spec_id"] == 1657
