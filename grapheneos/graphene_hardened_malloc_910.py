"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 910."""

def spec_graphene_hardened_malloc_910() -> dict:
    return {"system": "GrapheneOS", "spec_id": 910, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_910():
    s = spec_graphene_hardened_malloc_910()
    assert s["spec_id"] == 910
