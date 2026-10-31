"""Specification for seL4 untyped memory retyping capability constraint order 1495."""

def spec_sel4_untyped_retype_1495() -> dict:
    return {"system": "seL4", "spec_id": 1495, "cap_rights": 0x07, "cnode_depth": 32, "badge": 215}

def test_spec_sel4_untyped_retype_1495():
    s = spec_sel4_untyped_retype_1495()
    assert s["spec_id"] == 1495
