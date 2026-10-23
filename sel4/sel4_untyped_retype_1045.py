"""Specification for seL4 untyped memory retyping capability constraint order 1045."""

def spec_sel4_untyped_retype_1045() -> dict:
    return {"system": "seL4", "spec_id": 1045, "cap_rights": 0x07, "cnode_depth": 32, "badge": 21}

def test_spec_sel4_untyped_retype_1045():
    s = spec_sel4_untyped_retype_1045()
    assert s["spec_id"] == 1045
