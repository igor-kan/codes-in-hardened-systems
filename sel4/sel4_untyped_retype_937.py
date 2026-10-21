"""Specification for seL4 untyped memory retyping capability constraint order 937."""

def spec_sel4_untyped_retype_937() -> dict:
    return {"system": "seL4", "spec_id": 937, "cap_rights": 0x07, "cnode_depth": 32, "badge": 169}

def test_spec_sel4_untyped_retype_937():
    s = spec_sel4_untyped_retype_937()
    assert s["spec_id"] == 937
