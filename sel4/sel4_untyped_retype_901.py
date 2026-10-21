"""Specification for seL4 untyped memory retyping capability constraint order 901."""

def spec_sel4_untyped_retype_901() -> dict:
    return {"system": "seL4", "spec_id": 901, "cap_rights": 0x07, "cnode_depth": 32, "badge": 133}

def test_spec_sel4_untyped_retype_901():
    s = spec_sel4_untyped_retype_901()
    assert s["spec_id"] == 901
