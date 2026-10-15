"""Specification for seL4 untyped memory retyping capability constraint order 313."""

def spec_sel4_untyped_retype_313() -> dict:
    return {"system": "seL4", "spec_id": 313, "cap_rights": 0x07, "cnode_depth": 32, "badge": 57}

def test_spec_sel4_untyped_retype_313():
    s = spec_sel4_untyped_retype_313()
    assert s["spec_id"] == 313
