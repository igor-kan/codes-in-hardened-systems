"""Specification for seL4 untyped memory retyping capability constraint order 139."""

def spec_sel4_untyped_retype_139() -> dict:
    return {"system": "seL4", "spec_id": 139, "cap_rights": 0x07, "cnode_depth": 32, "badge": 139}

def test_spec_sel4_untyped_retype_139():
    s = spec_sel4_untyped_retype_139()
    assert s["spec_id"] == 139
