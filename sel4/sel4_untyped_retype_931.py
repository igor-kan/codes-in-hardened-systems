"""Specification for seL4 untyped memory retyping capability constraint order 931."""

def spec_sel4_untyped_retype_931() -> dict:
    return {"system": "seL4", "spec_id": 931, "cap_rights": 0x07, "cnode_depth": 32, "badge": 163}

def test_spec_sel4_untyped_retype_931():
    s = spec_sel4_untyped_retype_931()
    assert s["spec_id"] == 931
