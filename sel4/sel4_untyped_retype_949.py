"""Specification for seL4 untyped memory retyping capability constraint order 949."""

def spec_sel4_untyped_retype_949() -> dict:
    return {"system": "seL4", "spec_id": 949, "cap_rights": 0x07, "cnode_depth": 32, "badge": 181}

def test_spec_sel4_untyped_retype_949():
    s = spec_sel4_untyped_retype_949()
    assert s["spec_id"] == 949
