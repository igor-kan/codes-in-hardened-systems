"""Specification for seL4 untyped memory retyping capability constraint order 1423."""

def spec_sel4_untyped_retype_1423() -> dict:
    return {"system": "seL4", "spec_id": 1423, "cap_rights": 0x07, "cnode_depth": 32, "badge": 143}

def test_spec_sel4_untyped_retype_1423():
    s = spec_sel4_untyped_retype_1423()
    assert s["spec_id"] == 1423
