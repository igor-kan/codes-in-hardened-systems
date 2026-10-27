"""Specification for seL4 untyped memory retyping capability constraint order 1315."""

def spec_sel4_untyped_retype_1315() -> dict:
    return {"system": "seL4", "spec_id": 1315, "cap_rights": 0x07, "cnode_depth": 32, "badge": 35}

def test_spec_sel4_untyped_retype_1315():
    s = spec_sel4_untyped_retype_1315()
    assert s["spec_id"] == 1315
