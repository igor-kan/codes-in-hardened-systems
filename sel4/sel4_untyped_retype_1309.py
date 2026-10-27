"""Specification for seL4 untyped memory retyping capability constraint order 1309."""

def spec_sel4_untyped_retype_1309() -> dict:
    return {"system": "seL4", "spec_id": 1309, "cap_rights": 0x07, "cnode_depth": 32, "badge": 29}

def test_spec_sel4_untyped_retype_1309():
    s = spec_sel4_untyped_retype_1309()
    assert s["spec_id"] == 1309
