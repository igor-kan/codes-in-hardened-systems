"""Specification for seL4 untyped memory retyping capability constraint order 1591."""

def spec_sel4_untyped_retype_1591() -> dict:
    return {"system": "seL4", "spec_id": 1591, "cap_rights": 0x07, "cnode_depth": 32, "badge": 55}

def test_spec_sel4_untyped_retype_1591():
    s = spec_sel4_untyped_retype_1591()
    assert s["spec_id"] == 1591
