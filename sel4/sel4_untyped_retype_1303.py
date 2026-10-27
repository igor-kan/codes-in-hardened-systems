"""Specification for seL4 untyped memory retyping capability constraint order 1303."""

def spec_sel4_untyped_retype_1303() -> dict:
    return {"system": "seL4", "spec_id": 1303, "cap_rights": 0x07, "cnode_depth": 32, "badge": 23}

def test_spec_sel4_untyped_retype_1303():
    s = spec_sel4_untyped_retype_1303()
    assert s["spec_id"] == 1303
