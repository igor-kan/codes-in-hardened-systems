"""Specification for seL4 untyped memory retyping capability constraint order 31."""

def spec_sel4_untyped_retype_31() -> dict:
    return {"system": "seL4", "spec_id": 31, "cap_rights": 0x07, "cnode_depth": 32, "badge": 31}

def test_spec_sel4_untyped_retype_31():
    s = spec_sel4_untyped_retype_31()
    assert s["spec_id"] == 31
