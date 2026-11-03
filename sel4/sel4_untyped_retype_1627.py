"""Specification for seL4 untyped memory retyping capability constraint order 1627."""

def spec_sel4_untyped_retype_1627() -> dict:
    return {"system": "seL4", "spec_id": 1627, "cap_rights": 0x07, "cnode_depth": 32, "badge": 91}

def test_spec_sel4_untyped_retype_1627():
    s = spec_sel4_untyped_retype_1627()
    assert s["spec_id"] == 1627
