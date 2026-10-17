"""Specification for seL4 untyped memory retyping capability constraint order 511."""

def spec_sel4_untyped_retype_511() -> dict:
    return {"system": "seL4", "spec_id": 511, "cap_rights": 0x07, "cnode_depth": 32, "badge": 255}

def test_spec_sel4_untyped_retype_511():
    s = spec_sel4_untyped_retype_511()
    assert s["spec_id"] == 511
