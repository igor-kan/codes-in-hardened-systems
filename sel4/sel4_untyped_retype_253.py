"""Specification for seL4 untyped memory retyping capability constraint order 253."""

def spec_sel4_untyped_retype_253() -> dict:
    return {"system": "seL4", "spec_id": 253, "cap_rights": 0x07, "cnode_depth": 32, "badge": 253}

def test_spec_sel4_untyped_retype_253():
    s = spec_sel4_untyped_retype_253()
    assert s["spec_id"] == 253
