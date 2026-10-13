"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 178."""

def spec_graphene_hardened_malloc_178() -> dict:
    return {"system": "GrapheneOS", "spec_id": 178, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_178():
    s = spec_graphene_hardened_malloc_178()
    assert s["spec_id"] == 178
