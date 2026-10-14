"""Specification for seL4 untyped memory retyping capability constraint order 223."""

def spec_sel4_untyped_retype_223() -> dict:
    return {"system": "seL4", "spec_id": 223, "cap_rights": 0x07, "cnode_depth": 32, "badge": 223}

def test_spec_sel4_untyped_retype_223():
    s = spec_sel4_untyped_retype_223()
    assert s["spec_id"] == 223
