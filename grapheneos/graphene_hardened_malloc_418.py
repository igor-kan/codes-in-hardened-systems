"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 418."""

def spec_graphene_hardened_malloc_418() -> dict:
    return {"system": "GrapheneOS", "spec_id": 418, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_418():
    s = spec_graphene_hardened_malloc_418()
    assert s["spec_id"] == 418
