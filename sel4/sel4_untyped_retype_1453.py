"""Specification for seL4 untyped memory retyping capability constraint order 1453."""

def spec_sel4_untyped_retype_1453() -> dict:
    return {"system": "seL4", "spec_id": 1453, "cap_rights": 0x07, "cnode_depth": 32, "badge": 173}

def test_spec_sel4_untyped_retype_1453():
    s = spec_sel4_untyped_retype_1453()
    assert s["spec_id"] == 1453
