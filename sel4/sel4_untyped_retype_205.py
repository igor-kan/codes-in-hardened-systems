"""Specification for seL4 untyped memory retyping capability constraint order 205."""

def spec_sel4_untyped_retype_205() -> dict:
    return {"system": "seL4", "spec_id": 205, "cap_rights": 0x07, "cnode_depth": 32, "badge": 205}

def test_spec_sel4_untyped_retype_205():
    s = spec_sel4_untyped_retype_205()
    assert s["spec_id"] == 205
