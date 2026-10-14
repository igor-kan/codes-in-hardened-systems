"""Specification for seL4 untyped memory retyping capability constraint order 247."""

def spec_sel4_untyped_retype_247() -> dict:
    return {"system": "seL4", "spec_id": 247, "cap_rights": 0x07, "cnode_depth": 32, "badge": 247}

def test_spec_sel4_untyped_retype_247():
    s = spec_sel4_untyped_retype_247()
    assert s["spec_id"] == 247
