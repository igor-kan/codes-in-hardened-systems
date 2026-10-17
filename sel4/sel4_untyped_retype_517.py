"""Specification for seL4 untyped memory retyping capability constraint order 517."""

def spec_sel4_untyped_retype_517() -> dict:
    return {"system": "seL4", "spec_id": 517, "cap_rights": 0x07, "cnode_depth": 32, "badge": 5}

def test_spec_sel4_untyped_retype_517():
    s = spec_sel4_untyped_retype_517()
    assert s["spec_id"] == 517
