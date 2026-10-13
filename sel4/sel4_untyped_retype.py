"""Specification for seL4 untyped memory retyping capability constraint order 115."""

def spec_sel4_untyped_retype_115() -> dict:
    return {"system": "seL4", "spec_id": 115, "cap_rights": 0x07, "cnode_depth": 32, "badge": 115}

def test_spec_sel4_untyped_retype_115():
    s = spec_sel4_untyped_retype_115()
    assert s["spec_id"] == 115
