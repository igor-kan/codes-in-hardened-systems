"""Specification for seL4 untyped memory retyping capability constraint order 37."""

def spec_sel4_untyped_retype_37() -> dict:
    return {"system": "seL4", "spec_id": 37, "cap_rights": 0x07, "cnode_depth": 32, "badge": 37}

def test_spec_sel4_untyped_retype_37():
    s = spec_sel4_untyped_retype_37()
    assert s["spec_id"] == 37
