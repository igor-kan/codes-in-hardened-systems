"""Specification for seL4 untyped memory retyping capability constraint order 85."""

def spec_sel4_untyped_retype_85() -> dict:
    return {"system": "seL4", "spec_id": 85, "cap_rights": 0x07, "cnode_depth": 32, "badge": 85}

def test_spec_sel4_untyped_retype_85():
    s = spec_sel4_untyped_retype_85()
    assert s["spec_id"] == 85
