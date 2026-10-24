"""Specification for seL4 untyped memory retyping capability constraint order 1117."""

def spec_sel4_untyped_retype_1117() -> dict:
    return {"system": "seL4", "spec_id": 1117, "cap_rights": 0x07, "cnode_depth": 32, "badge": 93}

def test_spec_sel4_untyped_retype_1117():
    s = spec_sel4_untyped_retype_1117()
    assert s["spec_id"] == 1117
