"""Specification for seL4 untyped memory retyping capability constraint order 1417."""

def spec_sel4_untyped_retype_1417() -> dict:
    return {"system": "seL4", "spec_id": 1417, "cap_rights": 0x07, "cnode_depth": 32, "badge": 137}

def test_spec_sel4_untyped_retype_1417():
    s = spec_sel4_untyped_retype_1417()
    assert s["spec_id"] == 1417
