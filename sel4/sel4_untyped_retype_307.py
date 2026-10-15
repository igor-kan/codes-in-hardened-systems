"""Specification for seL4 untyped memory retyping capability constraint order 307."""

def spec_sel4_untyped_retype_307() -> dict:
    return {"system": "seL4", "spec_id": 307, "cap_rights": 0x07, "cnode_depth": 32, "badge": 51}

def test_spec_sel4_untyped_retype_307():
    s = spec_sel4_untyped_retype_307()
    assert s["spec_id"] == 307
