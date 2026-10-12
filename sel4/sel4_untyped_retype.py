"""Specification for seL4 untyped memory retyping capability constraint order 25."""

def spec_sel4_untyped_retype_25() -> dict:
    return {"system": "seL4", "spec_id": 25, "cap_rights": 0x07, "cnode_depth": 32, "badge": 25}

def test_spec_sel4_untyped_retype_25():
    s = spec_sel4_untyped_retype_25()
    assert s["spec_id"] == 25
