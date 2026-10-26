"""Specification for seL4 untyped memory retyping capability constraint order 1249."""

def spec_sel4_untyped_retype_1249() -> dict:
    return {"system": "seL4", "spec_id": 1249, "cap_rights": 0x07, "cnode_depth": 32, "badge": 225}

def test_spec_sel4_untyped_retype_1249():
    s = spec_sel4_untyped_retype_1249()
    assert s["spec_id"] == 1249
