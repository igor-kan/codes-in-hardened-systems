"""Specification for seL4 untyped memory retyping capability constraint order 1357."""

def spec_sel4_untyped_retype_1357() -> dict:
    return {"system": "seL4", "spec_id": 1357, "cap_rights": 0x07, "cnode_depth": 32, "badge": 77}

def test_spec_sel4_untyped_retype_1357():
    s = spec_sel4_untyped_retype_1357()
    assert s["spec_id"] == 1357
