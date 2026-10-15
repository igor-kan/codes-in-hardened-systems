"""Specification for seL4 untyped memory retyping capability constraint order 337."""

def spec_sel4_untyped_retype_337() -> dict:
    return {"system": "seL4", "spec_id": 337, "cap_rights": 0x07, "cnode_depth": 32, "badge": 81}

def test_spec_sel4_untyped_retype_337():
    s = spec_sel4_untyped_retype_337()
    assert s["spec_id"] == 337
