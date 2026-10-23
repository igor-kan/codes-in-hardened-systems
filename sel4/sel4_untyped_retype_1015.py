"""Specification for seL4 untyped memory retyping capability constraint order 1015."""

def spec_sel4_untyped_retype_1015() -> dict:
    return {"system": "seL4", "spec_id": 1015, "cap_rights": 0x07, "cnode_depth": 32, "badge": 247}

def test_spec_sel4_untyped_retype_1015():
    s = spec_sel4_untyped_retype_1015()
    assert s["spec_id"] == 1015
