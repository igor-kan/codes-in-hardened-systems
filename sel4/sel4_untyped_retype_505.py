"""Specification for seL4 untyped memory retyping capability constraint order 505."""

def spec_sel4_untyped_retype_505() -> dict:
    return {"system": "seL4", "spec_id": 505, "cap_rights": 0x07, "cnode_depth": 32, "badge": 249}

def test_spec_sel4_untyped_retype_505():
    s = spec_sel4_untyped_retype_505()
    assert s["spec_id"] == 505
