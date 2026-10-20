"""Specification for seL4 untyped memory retyping capability constraint order 811."""

def spec_sel4_untyped_retype_811() -> dict:
    return {"system": "seL4", "spec_id": 811, "cap_rights": 0x07, "cnode_depth": 32, "badge": 43}

def test_spec_sel4_untyped_retype_811():
    s = spec_sel4_untyped_retype_811()
    assert s["spec_id"] == 811
