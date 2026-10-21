"""Specification for seL4 untyped memory retyping capability constraint order 907."""

def spec_sel4_untyped_retype_907() -> dict:
    return {"system": "seL4", "spec_id": 907, "cap_rights": 0x07, "cnode_depth": 32, "badge": 139}

def test_spec_sel4_untyped_retype_907():
    s = spec_sel4_untyped_retype_907()
    assert s["spec_id"] == 907
