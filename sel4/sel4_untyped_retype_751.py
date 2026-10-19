"""Specification for seL4 untyped memory retyping capability constraint order 751."""

def spec_sel4_untyped_retype_751() -> dict:
    return {"system": "seL4", "spec_id": 751, "cap_rights": 0x07, "cnode_depth": 32, "badge": 239}

def test_spec_sel4_untyped_retype_751():
    s = spec_sel4_untyped_retype_751()
    assert s["spec_id"] == 751
