"""Specification for seL4 untyped memory retyping capability constraint order 151."""

def spec_sel4_untyped_retype_151() -> dict:
    return {"system": "seL4", "spec_id": 151, "cap_rights": 0x07, "cnode_depth": 32, "badge": 151}

def test_spec_sel4_untyped_retype_151():
    s = spec_sel4_untyped_retype_151()
    assert s["spec_id"] == 151
