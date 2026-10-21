"""Specification for seL4 untyped memory retyping capability constraint order 943."""

def spec_sel4_untyped_retype_943() -> dict:
    return {"system": "seL4", "spec_id": 943, "cap_rights": 0x07, "cnode_depth": 32, "badge": 175}

def test_spec_sel4_untyped_retype_943():
    s = spec_sel4_untyped_retype_943()
    assert s["spec_id"] == 943
