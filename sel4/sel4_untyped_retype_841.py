"""Specification for seL4 untyped memory retyping capability constraint order 841."""

def spec_sel4_untyped_retype_841() -> dict:
    return {"system": "seL4", "spec_id": 841, "cap_rights": 0x07, "cnode_depth": 32, "badge": 73}

def test_spec_sel4_untyped_retype_841():
    s = spec_sel4_untyped_retype_841()
    assert s["spec_id"] == 841
