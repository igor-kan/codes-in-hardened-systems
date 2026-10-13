"""Specification for seL4 untyped memory retyping capability constraint order 163."""

def spec_sel4_untyped_retype_163() -> dict:
    return {"system": "seL4", "spec_id": 163, "cap_rights": 0x07, "cnode_depth": 32, "badge": 163}

def test_spec_sel4_untyped_retype_163():
    s = spec_sel4_untyped_retype_163()
    assert s["spec_id"] == 163
