"""Specification for seL4 untyped memory retyping capability constraint order 733."""

def spec_sel4_untyped_retype_733() -> dict:
    return {"system": "seL4", "spec_id": 733, "cap_rights": 0x07, "cnode_depth": 32, "badge": 221}

def test_spec_sel4_untyped_retype_733():
    s = spec_sel4_untyped_retype_733()
    assert s["spec_id"] == 733
