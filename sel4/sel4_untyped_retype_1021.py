"""Specification for seL4 untyped memory retyping capability constraint order 1021."""

def spec_sel4_untyped_retype_1021() -> dict:
    return {"system": "seL4", "spec_id": 1021, "cap_rights": 0x07, "cnode_depth": 32, "badge": 253}

def test_spec_sel4_untyped_retype_1021():
    s = spec_sel4_untyped_retype_1021()
    assert s["spec_id"] == 1021
