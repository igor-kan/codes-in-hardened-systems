"""Specification for seL4 untyped memory retyping capability constraint order 229."""

def spec_sel4_untyped_retype_229() -> dict:
    return {"system": "seL4", "spec_id": 229, "cap_rights": 0x07, "cnode_depth": 32, "badge": 229}

def test_spec_sel4_untyped_retype_229():
    s = spec_sel4_untyped_retype_229()
    assert s["spec_id"] == 229
