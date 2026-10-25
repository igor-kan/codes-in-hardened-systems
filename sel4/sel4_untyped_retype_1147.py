"""Specification for seL4 untyped memory retyping capability constraint order 1147."""

def spec_sel4_untyped_retype_1147() -> dict:
    return {"system": "seL4", "spec_id": 1147, "cap_rights": 0x07, "cnode_depth": 32, "badge": 123}

def test_spec_sel4_untyped_retype_1147():
    s = spec_sel4_untyped_retype_1147()
    assert s["spec_id"] == 1147
