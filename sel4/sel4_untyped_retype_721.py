"""Specification for seL4 untyped memory retyping capability constraint order 721."""

def spec_sel4_untyped_retype_721() -> dict:
    return {"system": "seL4", "spec_id": 721, "cap_rights": 0x07, "cnode_depth": 32, "badge": 209}

def test_spec_sel4_untyped_retype_721():
    s = spec_sel4_untyped_retype_721()
    assert s["spec_id"] == 721
