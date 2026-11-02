"""Specification for seL4 untyped memory retyping capability constraint order 1549."""

def spec_sel4_untyped_retype_1549() -> dict:
    return {"system": "seL4", "spec_id": 1549, "cap_rights": 0x07, "cnode_depth": 32, "badge": 13}

def test_spec_sel4_untyped_retype_1549():
    s = spec_sel4_untyped_retype_1549()
    assert s["spec_id"] == 1549
