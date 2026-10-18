"""Specification for seL4 untyped memory retyping capability constraint order 601."""

def spec_sel4_untyped_retype_601() -> dict:
    return {"system": "seL4", "spec_id": 601, "cap_rights": 0x07, "cnode_depth": 32, "badge": 89}

def test_spec_sel4_untyped_retype_601():
    s = spec_sel4_untyped_retype_601()
    assert s["spec_id"] == 601
