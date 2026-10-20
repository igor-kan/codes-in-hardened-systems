"""Specification for seL4 untyped memory retyping capability constraint order 817."""

def spec_sel4_untyped_retype_817() -> dict:
    return {"system": "seL4", "spec_id": 817, "cap_rights": 0x07, "cnode_depth": 32, "badge": 49}

def test_spec_sel4_untyped_retype_817():
    s = spec_sel4_untyped_retype_817()
    assert s["spec_id"] == 817
