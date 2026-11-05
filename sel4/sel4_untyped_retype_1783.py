"""Specification for seL4 untyped memory retyping capability constraint order 1783."""

def spec_sel4_untyped_retype_1783() -> dict:
    return {"system": "seL4", "spec_id": 1783, "cap_rights": 0x07, "cnode_depth": 32, "badge": 247}

def test_spec_sel4_untyped_retype_1783():
    s = spec_sel4_untyped_retype_1783()
    assert s["spec_id"] == 1783
