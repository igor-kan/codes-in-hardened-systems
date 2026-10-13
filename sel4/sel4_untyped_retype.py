"""Specification for seL4 untyped memory retyping capability constraint order 109."""

def spec_sel4_untyped_retype_109() -> dict:
    return {"system": "seL4", "spec_id": 109, "cap_rights": 0x07, "cnode_depth": 32, "badge": 109}

def test_spec_sel4_untyped_retype_109():
    s = spec_sel4_untyped_retype_109()
    assert s["spec_id"] == 109
