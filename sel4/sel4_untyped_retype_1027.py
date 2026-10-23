"""Specification for seL4 untyped memory retyping capability constraint order 1027."""

def spec_sel4_untyped_retype_1027() -> dict:
    return {"system": "seL4", "spec_id": 1027, "cap_rights": 0x07, "cnode_depth": 32, "badge": 3}

def test_spec_sel4_untyped_retype_1027():
    s = spec_sel4_untyped_retype_1027()
    assert s["spec_id"] == 1027
