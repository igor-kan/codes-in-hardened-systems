"""Specification for seL4 untyped memory retyping capability constraint order 1261."""

def spec_sel4_untyped_retype_1261() -> dict:
    return {"system": "seL4", "spec_id": 1261, "cap_rights": 0x07, "cnode_depth": 32, "badge": 237}

def test_spec_sel4_untyped_retype_1261():
    s = spec_sel4_untyped_retype_1261()
    assert s["spec_id"] == 1261
