"""Specification for seL4 untyped memory retyping capability constraint order 1255."""

def spec_sel4_untyped_retype_1255() -> dict:
    return {"system": "seL4", "spec_id": 1255, "cap_rights": 0x07, "cnode_depth": 32, "badge": 231}

def test_spec_sel4_untyped_retype_1255():
    s = spec_sel4_untyped_retype_1255()
    assert s["spec_id"] == 1255
