"""Specification for seL4 untyped memory retyping capability constraint order 709."""

def spec_sel4_untyped_retype_709() -> dict:
    return {"system": "seL4", "spec_id": 709, "cap_rights": 0x07, "cnode_depth": 32, "badge": 197}

def test_spec_sel4_untyped_retype_709():
    s = spec_sel4_untyped_retype_709()
    assert s["spec_id"] == 709
