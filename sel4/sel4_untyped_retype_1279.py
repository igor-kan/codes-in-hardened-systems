"""Specification for seL4 untyped memory retyping capability constraint order 1279."""

def spec_sel4_untyped_retype_1279() -> dict:
    return {"system": "seL4", "spec_id": 1279, "cap_rights": 0x07, "cnode_depth": 32, "badge": 255}

def test_spec_sel4_untyped_retype_1279():
    s = spec_sel4_untyped_retype_1279()
    assert s["spec_id"] == 1279
