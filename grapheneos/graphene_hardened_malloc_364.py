"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 364."""

def spec_graphene_hardened_malloc_364() -> dict:
    return {"system": "GrapheneOS", "spec_id": 364, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_364():
    s = spec_graphene_hardened_malloc_364()
    assert s["spec_id"] == 364
