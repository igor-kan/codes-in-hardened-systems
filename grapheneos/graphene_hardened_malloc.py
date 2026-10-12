"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 16."""

def spec_graphene_hardened_malloc_16() -> dict:
    return {"system": "GrapheneOS", "spec_id": 16, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_16():
    s = spec_graphene_hardened_malloc_16()
    assert s["spec_id"] == 16
