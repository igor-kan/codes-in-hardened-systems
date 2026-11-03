"""Specification for seL4 untyped memory retyping capability constraint order 1651."""

def spec_sel4_untyped_retype_1651() -> dict:
    return {"system": "seL4", "spec_id": 1651, "cap_rights": 0x07, "cnode_depth": 32, "badge": 115}

def test_spec_sel4_untyped_retype_1651():
    s = spec_sel4_untyped_retype_1651()
    assert s["spec_id"] == 1651
