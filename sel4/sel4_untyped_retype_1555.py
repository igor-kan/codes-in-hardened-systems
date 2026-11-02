"""Specification for seL4 untyped memory retyping capability constraint order 1555."""

def spec_sel4_untyped_retype_1555() -> dict:
    return {"system": "seL4", "spec_id": 1555, "cap_rights": 0x07, "cnode_depth": 32, "badge": 19}

def test_spec_sel4_untyped_retype_1555():
    s = spec_sel4_untyped_retype_1555()
    assert s["spec_id"] == 1555
