"""Specification for seL4 untyped memory retyping capability constraint order 235."""

def spec_sel4_untyped_retype_235() -> dict:
    return {"system": "seL4", "spec_id": 235, "cap_rights": 0x07, "cnode_depth": 32, "badge": 235}

def test_spec_sel4_untyped_retype_235():
    s = spec_sel4_untyped_retype_235()
    assert s["spec_id"] == 235
