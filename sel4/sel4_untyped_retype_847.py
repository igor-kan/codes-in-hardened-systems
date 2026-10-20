"""Specification for seL4 untyped memory retyping capability constraint order 847."""

def spec_sel4_untyped_retype_847() -> dict:
    return {"system": "seL4", "spec_id": 847, "cap_rights": 0x07, "cnode_depth": 32, "badge": 79}

def test_spec_sel4_untyped_retype_847():
    s = spec_sel4_untyped_retype_847()
    assert s["spec_id"] == 847
