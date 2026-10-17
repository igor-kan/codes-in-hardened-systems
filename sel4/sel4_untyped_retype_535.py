"""Specification for seL4 untyped memory retyping capability constraint order 535."""

def spec_sel4_untyped_retype_535() -> dict:
    return {"system": "seL4", "spec_id": 535, "cap_rights": 0x07, "cnode_depth": 32, "badge": 23}

def test_spec_sel4_untyped_retype_535():
    s = spec_sel4_untyped_retype_535()
    assert s["spec_id"] == 535
