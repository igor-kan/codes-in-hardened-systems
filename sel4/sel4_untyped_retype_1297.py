"""Specification for seL4 untyped memory retyping capability constraint order 1297."""

def spec_sel4_untyped_retype_1297() -> dict:
    return {"system": "seL4", "spec_id": 1297, "cap_rights": 0x07, "cnode_depth": 32, "badge": 17}

def test_spec_sel4_untyped_retype_1297():
    s = spec_sel4_untyped_retype_1297()
    assert s["spec_id"] == 1297
