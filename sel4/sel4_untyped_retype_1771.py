"""Specification for seL4 untyped memory retyping capability constraint order 1771."""

def spec_sel4_untyped_retype_1771() -> dict:
    return {"system": "seL4", "spec_id": 1771, "cap_rights": 0x07, "cnode_depth": 32, "badge": 235}

def test_spec_sel4_untyped_retype_1771():
    s = spec_sel4_untyped_retype_1771()
    assert s["spec_id"] == 1771
