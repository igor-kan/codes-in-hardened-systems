"""Specification for seL4 untyped memory retyping capability constraint order 823."""

def spec_sel4_untyped_retype_823() -> dict:
    return {"system": "seL4", "spec_id": 823, "cap_rights": 0x07, "cnode_depth": 32, "badge": 55}

def test_spec_sel4_untyped_retype_823():
    s = spec_sel4_untyped_retype_823()
    assert s["spec_id"] == 823
